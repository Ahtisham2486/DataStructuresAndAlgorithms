#include <iostream>
#include<map>
using namespace std;
int main()
{
    cout<< "enter ht evalue of N:"<<endl;
    int n;
    
    cin >> n;
    int arr[n];
    cout<< "enter array elements:"<<endl;
    for (int i = 0; i < n; i++)
    {// takes the array as input 
                cin >> arr[i];
    }
    // pre computation
    map<int, int> mpp;
    for (int i = 0; i < n; i++)
    {
        mpp[arr[i]]++;
    }

    int q;
    cout<<"enter the no of quries:";
    cin >> q;
   
    while (q--)
     
    {
       
        int number;
        cin >> number;
        cout << "the frequency of"<< number <<"is:"  << mpp[number] << endl;
    }
    return 0;
}