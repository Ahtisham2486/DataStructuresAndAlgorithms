#include <iostream>
#include <string>
#include<stack>

using namespace std;

// priority for the operators //
int priority(char c)
{
    if (c == '^')
        return 3;
    else if (c == '*' || c == '/')
        return 2;
    else if (c == '+' || c == '-')
        return 1;
    else
    {
        return -1;
    }
}
// infix to postfix// a+b*(c^d-e)------> abcd^e-*+;
 string infixToPostfix(string s)
{
    int i = 0;
    stack<char> st;
    string ans = "";
    int n = s.size();
    while (i < n)
    {
        if ((s[i] >= 'A' && s[i]<= 'Z')
            || (s[i] >= 'a' && s[i] <= 'z') || (s[i] >= '0' && s[i]<= '9'))
            {
                ans = ans + (s[i]);
            }
        else if (s[i] == '(')
            st.push(s[i]);
        else if (s[i] == ')')
        {
            while (!st.empty() && st.top() != '(')
            {
                ans += st.top();
                st.pop();
            }
            st.pop();
        }
        else
        {

            while (!st.empty() && priority(s[i]) < priority(st.top()))
            {
                ans = ans + st.top();
                st.pop();
            }
            st.push(s[i]);
        }
        i++;
    }
    while (!st.empty())
    {
        ans = ans + st.top();
        st.pop();
    }
    return ans;
}

// infix to prefix//
// (a+b)*c-d+f------> +-*+abcdf

string infixToPrefix(string s){
    int 
}

int main()
{
    string exp = "a+b*(c^d-e)";
    cout << "Infix:   " << exp << endl;
    cout << "Postfix: " << infixToPostfix(exp) << endl;
    return 0;
}