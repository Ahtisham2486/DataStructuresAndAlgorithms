#include <iostream>
#include <vector>
using namespace std;
int main() {
    vector<int> vec;
    cout<< "size="<<vec.size();

    vec.push_back(24);
    vec.push_back(64);
    vec.push_back(78);
    cout<< "after push back size+ "<< vec.size()<<endl;
    vec.pop_back();
    cout<< vec.front()<<endl;

    cout << vec.at(1)<<endl;
  
    return 0;
}
