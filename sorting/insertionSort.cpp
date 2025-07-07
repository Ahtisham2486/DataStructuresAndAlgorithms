#include<iostream>
#include<vector >
using namespace std;
void insertionSort(int arr[],int n){
    for(int i=1;i<n;i++){
        int curr=arr[i], prev=i-1;
        while(prev>=0 && arr[prev]>curr){
            arr[prev+1]=arr[prev];
            prev--;
        }arr[prev+1]=curr;
    }
}
void printArray(int arr[], int n){
    for(int i=0 ; i<n ; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main (){
int arr[] ={7,1,3,4,5,8,9};
int n= 7;
 insertionSort(arr,n);
 printArray(arr, n);
 


    return 0;
}