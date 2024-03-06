#include <iostream>
#include <vector>

using namespace std;

int main(){
     // step 1 code a loop to push elements into the vector

     vector<int> v1;

     for (auto j = 1; j <= 10; ++j){
        v1.push_back(j);
     }

     // step 2 find out the capacity and size of the element in the vector

     cout << v1.size() << ", is the size of the vector" << endl;
     cout << v1.capacity() << ", is the capacity of the vector" << endl;

     return 0;
}