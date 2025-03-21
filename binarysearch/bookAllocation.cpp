#include <iostream>
#include <vector>

/*
 *
 * array of books we need to minimize the maximum number of pages allocated 
 * to each student since
 *  books, 2 students
 * total pages =  books need to be divided into 2 students
 * possible combinations to divide the book pages
 * 
 * question-->> we need to find the min  number of max page
 * 
 * 
 */
int minPossiblePages(vector<int>&arr, int n, int m,){
    int sum=0;
    for(int i=0;i<n; i++){
        sum+= arr[i];
    }
    int st=0, end=
    while ()
}



int main(){
    vecotr<int>arr= {2,1,3,4};
    int n=4 , m= 2;
    cout<< minPossiblePages(arr, n,m )<< endl;
    return 0;
}