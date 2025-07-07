#include <iostream>
#include <vector>
using namespace std;
void PrintNums(int n){
    
    if (n==1){
        cout<< 1 << " ";
        return;
    }

    cout << n << " ";
    PrintNums(n-1);

}
 int  Sum(int n){ /// sum of factorial of a number ..//
        if(n==1){
        return 1;
        }
        return n + Sum(n-1);
 }
  
 // check whether the array is sorted or not // 
  bool is_sorted (vector<int> arr, int n){
    if(n==0||n==1) return true;
    return arr[n-1] >= arr[n-2] && is_sorted(arr , n-1);
 }
int main(){
    
    //int n;
   //int fact;
//    int arr[n];
    //cout<< "enter the value of n :";
    //cin>>n;
    vector<int>arr ={ 3,4,6,7,8,2,9};
    vector<int > arr1={1,3,4,5,7,9,13,56,78,99};
    cout << "is sorted or not : "<< is_sorted(arr1 ,arr.size() );

    // for(int i=n ; i>=0;i--){// calculating factorial of a number  using loops // 
    //     fact= n* (n-1);
        
    // } cout<< fact << endl;
    
    //PrintNums(n);
    //cout<< " sum is : " <<Sum(n)  << endl;
   

    return 0;
}