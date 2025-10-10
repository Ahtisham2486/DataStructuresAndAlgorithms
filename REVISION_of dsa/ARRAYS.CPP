#include<iostream>
using namespace std;

// void reverse(int arr[],int n){
      
//     int st=0;
//     int end=n-1;
//     while(st<end){
//         swap(arr[st], arr[end]);
//         st++,end--;
       
//     }
//     for(int i=0;i<n;i++){
//        cout<< arr[i]<< " "; 
//     }
// }
    
int main(){
    int arr[]={5,15,22,1,-15,24};
    int n= sizeof(arr )/sizeof(arr[0]);
    int max_sum;
    //find all the subarrays
    for(int i=0;i<n;i++){
        int curr_sum=0;
        for(int j=i;j<n;j++){
            
                curr_sum+=arr[j];
                //cout<<arr[k]<<" ";
                max_sum=max(curr_sum,max_sum) ;
            
            
           cout<<endl;
        }
        
    }
    cout<< max_sum;
    //reverse(arr,n);
    return 0;
       }

       
       // reverse a array



    




    
    // linear search//
    // //target is -15;
    // int target=0;
    // for(int i=0;i<n;i++){
    //     if(arr[i]==target){
    //         cout<<i<<endl;
            
    //     }
    // }cout<<"not found"<<endl;





    // // find the largest and smallest ina n array
    
    // int smallest=INT_MAX;
    //  int largest=INT_MIN;
    // for(int i=0;i<n;i++){
    //     if(arr[i]<smallest){
    //         smallest=arr[i];
    //     }else{
    //         if(arr[i]>largest){
    //             largest=arr[i];
    //         }
    //     }
    // }
   
    
    // // cout<< smallest<<endl;
    // largest=max(smallest,largest);
    //   cout<<largest<<endl;
   


