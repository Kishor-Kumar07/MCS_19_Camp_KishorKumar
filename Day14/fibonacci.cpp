#include <iostream>
#include<cmath>
using namespace std;
int main()
{
   int n,x;
   cin>>n;
   cout<<"fibonacci of n is:";
   x=round((pow((sqrt(5)+1)/2,n)/sqrt(5)));
   cout<<x;
}
