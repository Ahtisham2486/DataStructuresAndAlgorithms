#include <iostream>
using namespace std;
bool linearSearch(int mat[][3], int rows , int cols , int key)
{    for(int i=0;i<rows;i++){
        for(int j=0;j<=cols;j++){
             if (key==mat[i][j]){
                cout<<mat[i][j]<<endl;
            return true;
             }
        }
        

    }
    return false ;
}



int main (){
    int rows=4;
    int cols=3;
    int key;
    cout<< "enter the key element"<< endl;
    cin>> key;

    int mat[4][3]={{1,2,3},{4,5,6},{7,8,9},{10,11,12}};
    
    cout<< " the element is : "<< linearSearch(mat, rows , cols,key );



    return 0;
}