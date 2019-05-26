#include<iostream>
using namespace std;
int fac(int n)
{
    int x=1;
    if(n==0)
    {
        cout<<"1";
    }
    while(n!=1)
    {
        x*=n;
        n--;
    }
    return x;
}
int main()
{
    int n,x;
    cin>>n;
    cout<<"factorial of n:";
    int f[n];
    f[0]=1;
    for(int i=1;i<=n;i++)
    {
        f[i]=f[i-1]*i;
    }
    cout<<f[n];
    x=fac(n);
    cout<<"\n"<<x;
    return 0;
}
