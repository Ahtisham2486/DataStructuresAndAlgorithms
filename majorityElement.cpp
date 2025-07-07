#include <iostream>
#include <vector>
using namespace std;
// BRUTE FORCE APPROACH 
 vector <int> majorityelement(vector <int> &nums ){
    int n =nums.size();
    for (int val:nums){
            int freq=0;
        for(int el:nums){
            if(el==val){
                freq++;
            }
        }
        if(freq>n/2){
            return val;
        }
    }
    int main ()
        vector<int>nums={2,2,1,1,1,2,2};
       
        return 0;
    }
    
 
    