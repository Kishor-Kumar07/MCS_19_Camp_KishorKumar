#include <iostream>

using namespace std;

int main()
{
    int temp,a=1,b=2,sum=0,count=0;
    while(sum<145)
    {
        if(b%2==0)
        {
            count+=b;
        }
        
    sum=a+b;
    temp=b;
    b=sum;
    a=temp;
    }
    cout<<count;
    return 0;
}
