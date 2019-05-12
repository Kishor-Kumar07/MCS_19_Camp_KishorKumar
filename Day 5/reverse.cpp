#include <iostream>
using namespace std;
struct stack
{
    char ele[10];
    int top=-1;
}s;
int main()
{
    string a;
    cin>>a;
    int len=a.length();
    for(int i=0;i<len;i++)
    {
        s.top++;
        s.ele[s.top]=a[i];
    }
        char x;
    while(s.top!=-1)
    {
        x=s.ele[s.top];
        cout<<x;
        s.top--;
    }
    return 0;
}
