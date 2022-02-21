#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> vector2;
        int num = target;
        int sum=0;
        //vector2 = nums;
        vector<int> :: iterator it,it1;
        
        for(int i = 0;i < nums.size();i++)
          {cout<<nums[i]<<"\t";}
       for(int i=0;i<nums.size()-1;i++)                 
        {
           
           int j = i+1;
           while(j <= nums.size())
           {
              //cout<<<<endl;
              sum =  nums[i] + nums[j];
              if(sum == target)
              {
              vector2.insert(vector2.begin(),i);
              vector2.insert(vector2.end(),j);
              cout<<"Target Vector:"<<endl;
              cout<<"Target acheived";
              break;
              }        
             else
             { j++;
             }

          } 
        }  
                                  
    return vector2;
        
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