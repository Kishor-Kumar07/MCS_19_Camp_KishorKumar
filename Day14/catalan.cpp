#include <iostream>
#include<cmath>
using namespace std;
unsigned long int binco(unsigned int n,unsigned int k)
{
    unsigned long int r=1;
    if(k>n-k)
    k=n-k;
    for(int i=0;i<k;i++)
    {
        r*=n-i;
        r/=i+1;
    }
    return r;
}
unsigned long int catalan(unsigned int n)
{
    unsigned long int c=binco(2*n,n);
    return c/n+1;
}
int main()
{
   for(int i=0;i<10;i++)
   {
       cout<<catalan(i)<<"\n";
   }
}



