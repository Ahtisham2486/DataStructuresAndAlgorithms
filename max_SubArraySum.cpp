#include<iostream>
using namespace std;
int main(){
    int n =5;
    int arr[]={3,-4,5,4,-1,7,-8};
    int maxsum=INT_MIN;


    for(int st=0;st<n;st++){
        int curr_sum=0;
        for( int end=st;end<n;end++){

            curr_sum = curr_sum+arr[end];
            maxsum= max(curr_sum , maxsum);
            
        }
       
    }
    cout <<"max sub_array sum is:"<<maxsum << endl;
    return 0;
}