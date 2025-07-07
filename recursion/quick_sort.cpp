#include<iostream>
#include<vector>
using namespace std;
int  partition(vector<int> &arr,int st,int end){
    int pivot=arr[end] , idx=st-1;
    for(int j=st;j<end;j++){
        if(arr[j]<=pivot){
            idx++;
            swap(arr[j], arr[idx]);
        }
    }
    idx++;
    swap(arr[end],arr[idx]);
    return idx;
    
}

void quick_sort(vector<int> &arr,int st, int end ){
    if(st<end){
        int piv_idx= partition(arr,st , end);
        quick_sort(arr,st,piv_idx-1) ;// left 
        quick_sort(arr,piv_idx+1, end); // right 
    }
}



int main(){
vector<int>arr={23,45,3,53,24,33};
quick_sort(arr,0,arr.size()-1);
for(int val:arr){
    cout<< val<<" ";
    }
    cout<<endl;


    return 0;
}