#include <iostream>
using namespace std;

void merge(int a[],int lb,int middle,int ub)
{
  int k = lb;
  int b[ub];
  int i=lb,j=middle+1;
  while(i<=middle && j<=ub)
  {
      if(a[i]<=a[j])
      {
        b[k] = a[i];
        i++;k++;
      }
      else
      {
          b[k] = a[j];
          j++,k++;
      }

  }
  if (i > middle)
  {
      while(j<=ub)
      {
          b[k]=a[j];j++;k++;
      }
  }
  else
  {
      while(i<=middle)
      {
          b[k]=a[i];
          i++;k++;
      }
  }
  

  for(k=lb;k<=ub;k++)
     a[k]=b[k];

}

void mergesort(int a[],int lb,int ub)
{
  int i = lb;
  int j = ub;
  
  if(i < j)
  {
  int mid = (i + j)/2;
  mergesort(a,i,mid);
  mergesort(a,mid+1,j);
  merge(a,i,mid,j);
}
}


int main(){
    int size,lb = 0,ub;
    cout<<"Enter the size of the array:"<<endl;
    cin>>size;
    int a[size];
    cout<<"Enter the elements: "<<endl;
    for(int i=0;i<size;i++)
    {
        cin>>a[i];
    }
   cout<<"ENtered elements are:";
   for(int i=0;i<size;i++)
     cout<<a[i]<<"\t";

    mergesort(a,lb,size);
    cout<<"Sorted array using merge Sort is:"<<endl;
    for(int i = 0;i<size;i++)
       cout<<a[i]<<endl;
    

}