#include <iostream>
using namespace std;
struct stack
{
    int ele[10];
    int top=-1;
}s;
void push(int a)
{
    s.top++;
s.ele[s.top]=a;
}
int pop()
{
    int x;
    if(s.top==-1)
    {
        return -1;
    }
    else
    {
    x=s.ele[s.top];
    s.top--;
    }
    return x;
}
int main()
{
    int n,m,x,count=0;
    int a[10],b[10];
    cin>>n;
    for(int i=0;i<n;i++)
    {
     cin>>m;
     for(int j=0;j<m;j++)
     {
         cin>>a[i];
         if(a[i]==1)
         {
             cin>>x;
             push(x);
         }
         else
         {
             b[count]=pop();
             count++;
         }
     }
     for(int k=0;k<count;k++)
     {
         cout<<b[k]<<" ";
     }
    }
    return 0;
}
