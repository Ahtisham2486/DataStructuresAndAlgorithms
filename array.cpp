// find the smallest / largest number in an array .
// int nums [] ={5 ,15,22,-1,-15,25}

#include <iostream>
#include <climits>

using namespace std;
int main(){
int nums[] ={5 ,15,22,-1,-15,25};
int size = 6;
int smallest = INT_MAX;
int largest = INT_MIN;
for(int i=0 ; i<size ;i++)
{
largest= max(nums[i],largest);
    if(nums[i]< smallest)
{
    smallest=nums[i];
    }
}
cout<< "smallest"<<smallest <<endl;
cout<< "largest"<< largest<<endl;
 


return 0;
}
