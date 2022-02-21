#include <iostream>
#include <vector>
#include <map>
using namespace std;
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int> m;
        vector<int> v;
        
        for(int i=0;i<nums.size();i++)
        {
            if(m.find(target-nums[i])!=m.end())
            {
                v.push_back(m[target-nums[i]]); //when it reaches the second element, thats substracted from target and gives
                                            // the first element, so m[firstelement] gives idnex of first elemenet
                v.push_back(i);  //this is index of second element
                //return v;
            }
            m[nums[i]]=i;  //storing the index as value and element as key
            //cout<<"m[i]: "<<m.second<<endl;
        }
        return v;
    }
};

int main()
{
    vector<int> numbers(5);
    vector<int> newVector(2);
    vector<int> :: iterator it;
    numbers[0] = 10;
    numbers[1] = 5;
    numbers[2] = 1;
    numbers[3] = 8;
    numbers[4] = 2;

    int target;
    Solution sol;

    cout<<"Enter the target:"<<"\t";
    cin>>target;


    newVector=sol.twoSum(numbers,target);
    cout<<"New Vector is: "<<"[";
    //for(int i = 0;i < newVector.size();i++)
     int i = 0;
      cout<<newVector[0]<<","<<newVector[1];
    cout<<"]"<<endl;

}