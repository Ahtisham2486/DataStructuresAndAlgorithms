#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        
        cin >> arr[i];
       
    }

    // pre compute
    int hash[13] = {0};
    for (int i = 0; i < n; i++)
    {
        hash[arr[i]] += 1;
    }

    int q;
    cout<< "enter the number of quries ;";
    cin >> q;
    while (q--)
    {
        int number;
        cin >> number;
        cout << "frequency of number is "<< hash[number] << endl;
    }
    return 0;
}