#include<iostream>
using namespace std;
int binary_search(int a[],int item,int low,int high)
{
    if(high<=low)
    return (item > a[low])?  (low + 1): low; 
    int mid=(low+high)/2;
    if(item==a[mid])
    return mid+1;
    if(item>a[mid])
     return binary_search(a,item,mid+1,high);
      return binary_search(a,item,low,mid-1);
}
void Insertion_Sort(int n,int a[])
{
    int selected,loc,j;
      for(int i=1;i<n;i++)
    {
      j=i-1;
      selected=a[i];
      loc=binary_search(a,selected,0,j);
      while(j>=loc)
      {
          a[j+1]=a[j];
          j=j-1;
      }
      a[j+1]=selected;
       
    }

}
int main()
{
    int n;  //number of elements in an array
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    Insertion_Sort(n,a);
    //printing the sorted array
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }

}