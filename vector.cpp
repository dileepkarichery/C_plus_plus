#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v(3);
    vector<int> :: iterator it;

    v[0] = 12;
    v[1] = 15;
    v[2] = 17;

    cout << v.front() << endl;
    cout << v.back() << endl;

    v.push_back(19);

    cout << v.back() << endl;
    cout << v.at(2) << endl;
    cout << "The vector elements are:"<<endl;
    for (it = v.begin();it < v.end();it++)
    {
        cout<<*it<<"\t";
    }
    cout<<endl;

    v.assign(3,88);
    it = v.begin() + 1;
    v.insert(it,-9);
    //v.pop_back();
    v.emplace(it+1,-10);
    for(it = v.begin();it < v.end();it++)
    {
        cout<<*it<<"\t";
    }
    cout<<endl;
    cout<<"Iterating wihtout using iterator:";
   for(auto& itr:v)
     cout<<itr<<"\t";
   cout<<endl;  

    return 0;
}