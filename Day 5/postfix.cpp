#include <iostream>
using namespace std;
struct stack
{
    char ele[20];
}s;
 int top=-1;
void push(char c)
{
    top++;
    s.ele[top]=c;
}
char pop()
{
    char c;
    c=s.ele[top];
    top--;
    return c;
}
int prec(char c)
{
    if(c=='^') 
    return 3; 
    else if(c=='*'||c=='/') 
    return 2; 
    else if(c=='+'||c=='-') 
    return 1; 
    else
    return -1;
}
void infixtopostfix(string str)
{
    string st;
    int l=str.length();
    for(int i=0;i<l;i++)
    {
        if(str[i]>='a'&&str[i]<='z'||str[i]>='A'&&str[i]<='Z')
        st+=str[i];
        else if(str[i]=='(')
        push(str[i]);
        else if(str[i]==')')
        {
            while(top!=-1&&s.ele[top]!='(')
            {
                st+=pop();
            }
            if(s.ele[top]=='(')
            {
                pop();
            }
        }
        else
        {
            while(top!=-1&&prec(str[i])<=prec(s.ele[top]))
            {
                st+=pop();
            }
            push(str[i]);
        }
    }
    while(top!=-1)
    {
        st+=pop();
    }
    cout<<st;
}
int main()
{
   string str;
   cin>>str;
   infixtopostfix(str);
    return 0;
}

