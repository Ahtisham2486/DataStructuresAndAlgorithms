#include <iostream>
using namespace std;
 int sum=0;
int diagonalSum(int mat[4][4],  int n){
    for(int i=0;i<n; i++){
        for(int j=0; j<n; j++){
            if(i==j){
                sum+= mat[i][j];}
            else if (j==n-1-i){
                sum+= mat[i][j];
            }
        }
    }return sum;

}

int main(){
    int mat[][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
    int rows = 4 ; 
    int cols = 4; 
    int n=4;
    cout<< " the diagonal sum is : "<< diagonalSum(mat , n );

    return sum;

}