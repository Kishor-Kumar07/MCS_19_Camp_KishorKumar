#include<iostream>
using namespace std;
int main()
{
   int n,m,c,arr[10];
   cin>>n>>m;
   for(int i=0;i<n;i++)
   {
       cin>>arr[i];
       if(arr[i]==m)
       {
           c=i+1;
       }
   }
   cout<<c;
}
