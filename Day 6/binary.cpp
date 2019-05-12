#include<iostream>
using namespace std;
int search(int a[],int low,int high,int key)
{
   while(low<=high)
   {
     int mid=(low+high)/2;
     if(a[mid]<key)
     {
         low=mid+1;
     }
     else if(a[mid]>key)
     {
         high=mid-1;
     }
     else
     {
         return mid+1;
     }
   }
   return -1;                //key not found
 }
 int main()
 {
     int x,n,m,a[10],b[10];
     cin>>n;
     for(int i=0;i<n;i++)
     {
         cin>>a[i];
     }
     cin>>m;
     for(int i=0;i<n;i++)
     {
         cin>>x;
        b[i]=search(a,0,n-1,x);
     }
     for(int i=0;i<n;i++)
     {
         cout<<b[i]<<"\n";
     }
 }
