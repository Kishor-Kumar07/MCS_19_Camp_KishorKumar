#include<iostream>
using namespace std;
int main()
{
    int n,x,i=1,count=1;
    cin>>n;
    while(n>count)
    {
        i++;
        x=i;
            while(x%2==0)
            {
                x=x/2;
            }
            while(x%3==0)
            {
                x=x/3;
            }
            while(x%5==0)
            {
                x=x/5;
            }
            if(x==1)
            {
                count++;
            }
    }
    cout<<i;
    return 0;
}
