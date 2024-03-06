#include <iostream>
#include <vector>

using namespace std;

int main(){
    vector<int> v1;

    v1.push_back(1);
    v1.push_back(10);
    v1.push_back(15);

    for (auto j = v1.begin(); j != v1.end(); ++j){
        cout<<*j<<endl;
    }
    return 0;
}