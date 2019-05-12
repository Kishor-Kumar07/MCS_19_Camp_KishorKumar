#include<iostream>
using namespace std;
struct queue
{
    int ele[10];
    int front=0;
    int rear=0,size=10;
}q;
int count=0;
void push(int a)
{
    if(q.rear==q.size-1)
    {
        cout<<"queue is full";
    }
    else
    {
      q.ele[q.rear]=a;
     q.rear++;
     count++;
     cout<<count<<"\n";
    }
}
void pop()
{
    int x;
    if(q.rear==q.front)
    {
        cout<<-1<<" "<<count<<"\n";
    }
    else
    {
      x=q.ele[q.front];
     q.front++;
     count--;
     cout<<x<<" "<<count<<"\n";
    }
}
int main()
{
    int m,a;
    char s;
    cin>>m;
    for(int i=0;i<m;i++)
    {
        cin>>s;
        if(s=='E')
        {
         cin>>a;
         push(a);
        }
        else
        {
            pop();
        }
    }
}
