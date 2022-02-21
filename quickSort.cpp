#include <iostream>

using namespace std;
void swap(int *a,int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
    
}
int partition(int a[], int lb, int ub)
{
  
  int pivot = a[lb];
  int start = lb + 1;
  int end = ub;
  while (start < end){
  while(pivot >= a[start])
  {
      start++;
  }
  while(pivot < a[end]) {
      end--;
  }
  if(start < end)
  {
      swap(&a[start],&a[end]);
  }
  }
  swap(&a[lb],&a[end]); 
  return end;
}
void quicksort(int a[],int start,int end)
{
    int limit;
    if(start < end){
    limit = partition(a,start,end);
    quicksort(a,start,limit-1);
    quicksort(a,limit+1,end);
    }
}

int main()
{
    
    int size,element,start = 0;
    cout<<"Enter the size of the array:"<<endl;
    cin>>size;
    int a[size];
    cout<<"Input the Elements of the array:";
    for(int i = 0;i < size;i++)

    {

        cin>>a[i];
    }
    
     quicksort(a,start,size-1);
     cout<<"Sorted list is:"<<endl;
     for (int i = 0;i<size;i++)
      cout<<a[i]<<"\t";
     cout<<endl;
     //partition(a,start,size -1 );

}