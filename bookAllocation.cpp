#include <iostream>
#include <vectors>

int allocateBooks(vector<int> &arr, int k, int m) int main()
{
    vector<int> arr = {12, 34, 67, 90};
    int m = 4, k = 2;
    int sum=0;
    for(int num : arr){
        sum+= num;
    }int min = INT_MAX;
    int newSum = 0;    
    for(int i =0; i< arr.size();i++){
        newSum = sum - arr[i];
        min = newSum;

    }
    cout<<newSum;

}
/**
 *
 * array of books we need to minimize the maximum number of pages allocated 
 * to each student since
 * 4 books, 2 students
 * total pages = 203 books need to be divided into 2 students
 * possible combinations to divide the book pages
 * [12], [34 + 67+ 90] -> 12, 191 -> 191
 * [12, 34], [67, 90] -> 46, 157 -> 157
 * [12, 34, 67], 90, 113 -> 113
 * question-->> we need to find the min  number of max page
 * min => 113
 * 
 */