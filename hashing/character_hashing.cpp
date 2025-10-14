#include<iostream>
#include<string>
using namespace std;
int main(){
    string s;
    cin>>s;
  // precomputation 
  int hash[26]={0};
  for (int i=0;i<s.size();i++){
    hash[s[i]-'a']++;  // assing the correct value like b is of index 1---> 98-97=1 
    }



    int q;
    cin>>q;
    while(q--){
        char c;
        cin>>c;
        cout<< "frequency of "<<c<< "is:"<<hash[c-'a']<<endl;
        

    }



    return 0;
}