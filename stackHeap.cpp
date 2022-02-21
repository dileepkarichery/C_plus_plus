#include <iostream>
#include <string>
using namespace std;
void Segrate0and1s(int a[],int n);
void print(int a[],int n);
int main()
{
    
    int array[] = {0,1,1,1,0,1,0};
    int n = sizeof(array)/sizeof(array[0]);
    Segrate0and1s(array,n);
    print(array,n);
    cout<<endl;
}
void Segrate0and1s(int a[],int n)
{
    int count = 0;
    for(int i = 0;i < n;i++)
    {
        if(a[i] == 0)
        {
            count++;
        }
    }
    for(int i = 0;i < count;i++)
    {
        a[i]=0;
    }
    for(int i = count;i < n;i++)
    {
        a[i]=1;
    }
}

void print(int a[],int n)
{
    for(int i = 0;i < n; i++)
     cout<<a[i]<<"\t";
}