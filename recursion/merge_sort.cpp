#include<iostream>
using namespace std;
#include<vector>

void merge(vector<int> &ary,int st,int mid,int end){
    vector<int>temp;
    int i= st, j=mid+1;
    while(i<=mid&& j<=end){
        if(ary[i]>ary[j]){
            temp.push_back(ary[i]);
            i++;
        }else{
            temp.push_back(ary[j]);
            j++;
        }
    }
    while(i<=mid){
        temp.push_back(ary[i]);
        i++;
    }
    while(j<=end){
        temp.push_back(ary[j]);
        j++;
    }
    for(int idx=0;idx<temp.size();idx++){
        ary[idx+st]=temp[idx];
    }

}

void mergeSort(vector<int> &ary,int st, int end){
    if(st<end){
        int mid= st+ (end-st)/2;
    // left
    mergeSort(ary, st,mid);
    // right
    mergeSort(ary,mid+1, end);
    // merge the two sorted arrays
    merge(ary,  st, mid, end);
    }

}


int main(){
   
    vector<int>ary={12,31,35,8,32,17};
    int n= ary.size()-1;
    mergeSort(ary,0,n);
    for(int val:ary){
        cout<< val<< " ";
    }
    return 0;
}