#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void uphf(string str)
{
    char f,s;
    int pos=0;
    for(int i=1;i<=4;i++)
    {
    f=str[pos];
    s=str[pos+1];
    pos+=2;
    for(int j=4-i;j>=1;j--)
    {
        cout<<" ";
    }
    cout<<f;
        for(int k=1;k<i;k++)
        {
            cout<<"--";
        }
        cout<<s<<"\n";
    }    
}
void lwhf(string str)
{
 char f,s;
    int pos=0;
    for(int i=1;i<=4;i++)
    {
    f=str[pos];
    s=str[pos+1];
    pos+=2;
        for(int k=1;k<i;k++)
        {
            cout<<" ";
        }
         cout<<f;
         for(int j=4-i;j>=1;j--)
    {
        cout<<"--";
    }
        cout<<s<<"\n";
    }    
}
void print(string str[],int n)
{
    for(int i=0;i<n;i++)
    {
    int x=i%6;
    if(x%2==0)
        uphf(str[x]);
        else
        lwhf(str[x]);
    }
}
int main() 
{ 
  
    int n=8; 
    string DNA[]={"ATTAATTA","TAGCTAGC","CGCGATAT","TAATATGC","ATCGTACG","CGTAGCAT"}; 
    print(DNA, n); 
    return 0; 
} 

