#include<iostream>
using namespace std;
int maximumRow_sum(int mat[][3], int rows, int cols ){
    int max_sum=0;
   
    for(int i=0; i< rows ; i++){
        int rowsum =0;
        for(int j=0; j<cols; j++){
            rowsum= rowsum + mat[i][j];

        } 
        if (rowsum>max_sum){
            max_sum=rowsum;
        }
        cout<< "rowsum"<< rowsum<<endl;
    }
    return  max_sum;
 }



int main(){
    int mat[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    int rows= 3;
    int cols= 3;
    cout<< maximumRow_sum( mat , rows,cols);

    return 0;
}