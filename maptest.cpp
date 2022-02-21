#include <iostream>
#include <vector>
#include <map>
using namespace std;

int main(){
    vector<int> v;
    v = {10,20,30,90,110};
    map<int,int> m;

    for ( int i = 0; i < v.size();i++)
           m[i] = v[i];
    for (auto& t : m)
     cout<<t.first<<" "<<t.second<<endl;
    
}
