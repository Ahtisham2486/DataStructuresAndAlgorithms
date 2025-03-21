#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
bool is_possible(vector<int>&arr, int N, int C, int minallowdistance){
    int cows=1, laststallposition=arr[0];
    int n= arr.size();
    for(int i=1; i<n; i++){
        if (arr[i]-laststallposition>=minallowdistance){
            cows++;
            laststallposition=arr[i];  
        }if(cows==C)return true;
        
    }return false;
}

int mindistance(vector<int>arr,int N, int C){
        sort(arr.begin(),arr.end());
        int n = arr.size(), ans=-1;
        int st= 1, end= arr[n-1]-arr[0];
        while(st<= end){
            int mid=st + (end-st)/2;
            if(is_possible(arr, N, C, mid)){
                ans=mid;
                st=mid+1;
            }
            else{
                end=mid-1;
            }
        }return ans ;
    
    }
    int main(){
    vector<int>arr = {1,2,8,4,9};
    int N=5, C=3;
    cout<<mindistance(arr , N, C)<< endl;
    return 0;
}