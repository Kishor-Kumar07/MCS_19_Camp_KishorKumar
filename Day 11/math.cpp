#include<iostream>
using namespace std;
int GCD(int A, int B) {
    if(B==0)
        return A;
    else
        return GCD(B, A % B);
}
int main()
{
    int t,result1=1,result=1,x,a,b,c,m;
    cin>>a>>b>>c>>m;
    x=GCD(c,m);
    if(x==1)
    {
    while(b>0)
    {
        if(b%2==1)
            result=result*a;
        a=a*a;
        b=b/2;
    }
    result=result%m;
    t=m-2;
     while(t>0)
    {
        if(t%2==1)
            result1=result1*c;
        c=c*c;
        t=t/2;
    }
    result1=result1%m;
    result=(result*result1)%m;
    }
    cout<<result;
    return 0;
}
