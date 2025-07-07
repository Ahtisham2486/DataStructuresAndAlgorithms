#include<iostream>
#include<vector >
using namespace std;
/* selection sort runs for (n-1)iterations;
the arr has two compontets one Sorted and another unsorted ;
we extract element from unsorted and place it in sorted list at right place 
outer loop => runs upto (n-1)times;
inner loop => starts from i+1, 
if (arr[j])<arr[smallestIndex];
smallestIndex=j
swap (arr[i],arr[smallestIndex]);
*/

void selectionSort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        int smallestIndex=i;
        for(int j =i+1; j<n ; j++){
            if (arr[j]< arr[smallestIndex]){
                smallestIndex=j; }
              }
              swap (arr[i],arr[smallestIndex]);
    }
}
void printArray(int arr[], int n){
    for(int i=0 ; i<n ; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main (){
int arr[] ={4,1,5,2,3};
int n= 5;
 selectionSort(arr,n);
 printArray(arr, n);
 


    return 0;
}