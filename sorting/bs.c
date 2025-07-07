#include<stdio.h>
void binarySearch(int arr[],int st, int end,int tar){
    
    while(st<=end){
        int mid=(st+end)/2;
        if(tar==arr[mid]){
            printf("element found  %d  \t",mid);
           
            return;
        }
        else if(tar<arr[mid]){
            end=mid-1;
        }
        else{
            st=mid+1;
        }
      //  printf("array of mid %d \n ",arr[mid]);
        


    }printf("element not found");
}


int main(){
    int arr[6]={4,5,6,7,8,9};
    int st=0,end=5;
    int tar =6;
    binarySearch(arr,st, end, tar );
     
    
    return 0;
}