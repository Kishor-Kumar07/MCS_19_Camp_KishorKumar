#include <iostream>
#include<bits/stdc++.h>
using namespace std;
bool isone(int a)
{
    if(a==1)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
  int a[]={0,1,0,1,1,1,1,0,0,1,0};
  int n=sizeof(a)/sizeof(a[0]);
  int count=count_if(a,a+n,isone);
  cout<<"no.of 1's:"<<count;
  cout<<"\nno.of 0's:"<<n-count;
    return 0;
}

