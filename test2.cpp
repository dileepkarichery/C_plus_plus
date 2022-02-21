#include <iostream>
//#include <bits/stdc++.h>

using namespace std;
void swap(int *a,int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
} 

int main()
{
   int a[4] = {10,20,2,1};
   int lb = 0;
   int ub = 3;
   swap(&a[lb],&a[ub]);
   for(int i=0;i <= ub;i++)
      cout<<a[i]<<endl;
   
   if(lb == 0)
   {
      cout<<"hello ";
      goto label;
   }
   else
   {
      label:
      cout<<"world"<<endl;
   }
}