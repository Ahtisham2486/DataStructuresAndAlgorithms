#include<iostream>
using namespace std;
void bubblesort (int arr[],int n){
    // bubble sort swaps the adajecent elements //
    for(int i=0; i<n-1;i++){// loop runs upto n-1 times ...
        for(int j=0;j<n-i-1;j++){// inner loop has pattern  
            if (arr[j]>arr[j+1]){//such that i=0=> 4 comparisions=> n-i-1;
                swap(arr[j], arr[j+1]);// swaps the elements .
            }
        }
    }
}
void printArray(int arr[], int n){
    for (int i=0;i<n;i++){
        cout<< arr[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int n= 5;
    int arr[] ={4,1,5,3,2};
     bubblesort(arr, n);
     printArray( arr, n);
    return 0;
}