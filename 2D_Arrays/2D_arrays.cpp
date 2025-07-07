#include <iostream >
using namespace std;
int main (){
int rows= 5;
int cols= 3;
int matrix [5][3]={{1,2,3},{4,5,6},{7,8,9},{10,11,12},{13,14,15}};


for (int i=0 ; i< rows ; i++){// rows
    for(int j=0; j<cols; j++){
       cout<< matrix[i][j]<< " ";
    }
    cout<< endl;
}
cout << endl;
//cout << matrix[3][2]<< endl;

    return 0;
}