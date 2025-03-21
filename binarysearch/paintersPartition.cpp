#include<iostream>
#include<vector>
using namespace std;
/*given Array of N boards , and M painters ... 1 unit of time is consumed 
 to paint i unit of length . 
 task => find ""minimum time"" to paint all borads and in contaginous manner
arr =[ 40 , 30 , 10 , 20 ] ie n = 4 and given m = 2
p1 = 40 , p2= 60 >>> min time to paint all boards = 60;
p1 = 70 , p2 = 31 ...>> 70
p1 = 80 , p2 = 20 ....>> 80 
60 is our ans ..  
since the array is not sorted we will find the range of posssible values .. 
and apply binary search on range of values ..
now the task is to find if mid is possible or not ..
if the arr[i]< mid ... same painter would continue next board .. if not next 
PAINTER is needed ,
*/
bool is_possible(vector<int>& arr, int n ,int m ,int  maxAllowedTime){
  int   painter =1 , time = 0 ;
    for(int i=0; i< n ; i++){
        if (time+arr[i]<=maxAllowedTime){
            time+=arr[i];
        }
        else{
            painter++; 
            time = arr[i];
        }
    }
    return painter <= m;
}

 int minTimeToPaint(vector<int >&arr,int n, int m ){
    int sum =0, maxval= INT_MIN;
    for(int i= 0; i<n ; i++){
        sum +=arr[i];
        maxval= max(maxval, arr[i]);// gives us range of values ... 
    }
    int st = maxval , end = sum , ans =0;
    while(st<= end ){
        int mid = st + (end - st )/ 2 ; // binary search on range //
        if (is_possible(arr,n,m ,mid))// left 
         { ans= mid ;
            end = mid-1;// mid may be possible time and may be not to paint all boards .

        }
        else{
            // false 
            st = mid + 1 ;
        }
    }
    return ans;

}
int main(){ 
    vector<int>arr={40,30,10,20};
        int n=4 , m =2 ;// n are boards and m are painters //
        cout<< minTimeToPaint(arr, n ,m)<< endl;
        return 0;
}
