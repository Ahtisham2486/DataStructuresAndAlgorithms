#include<iostream>
#include<vector>
using namespace std;
int merge(vector<int> &arr,int st ,int mid,int end ){
    vector<int>ans;
    int i=st, j=mid+1;
    int inv_count=0;
    while(i<=mid && j<=end){
        if(arr[i]<arr[j]){
        ans.push_back(arr[i]);
    }else{
        ans.push_back(arr[j]);
        inv_count+=(mid-i+1); 
        j++;
        }
    }
    
    while(i<=mid){
        ans.push_back(arr[i]);
        i++;
    }
    while(j<=end){
        ans.push_back(arr[j]);
        j++;
    }
for(int idx=0;idx<ans.size();idx++){
    arr[idx+st]=ans[idx];
}
return inv_count;

}
int merge_sort(vector<int> &arr,int st ,int end ){
    if(st<end){
         int mid= st+(end-st)/2;
    int left_invcount = merge_sort(arr, st ,mid); // left sub array;
    int right_invcount=merge_sort(arr, mid+1,end);// right sub array;
    int inv_count=merge(arr, st ,mid, end);
    return left_invcount+right_invcount+inv_count;

    }
    return 0;
   
}



// // BRUTE FORCE APPROACH//
// int count_inversions( vector<int>& arr , vector<int>& ans){
//     int count=0;
//     int n=arr.size();
//     for(int i=0;i<n;i++){
//         for(int j=i+1;j<n;j++){
//             if (arr[i]>arr[j]){
//                 ans.push_back(arr[i]);
//                 ans.push_back(arr[j]);
//                 count++;
//             }
//         }
//     }return count;
    
// }
int main(){
vector<int>arr={1,3,5,10,2,6,8,9};

int ans=merge_sort(arr,0,arr.size()-1);
cout<< "inv_count"<< ans <<endl;
return 0;
}



   


