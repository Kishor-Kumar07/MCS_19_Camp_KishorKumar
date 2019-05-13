#include<iostream>
using namespace std;
int count=1;
int main()
{
    int n,temp,x;
    cin>>n;
    x=n;
    for(int i=2;i<=n;i++)
    {
        while(i!=0)
        {
            temp=x%i;
            x=i;
            i=temp;
            if(i==0&&x==1)
            {
                count++;
                break;
            }
        }
    }
    return 0;
}
