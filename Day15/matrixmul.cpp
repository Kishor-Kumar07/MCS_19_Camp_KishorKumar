#include<iostream>
using namespace std;
int main()
{
    int arr[5][5],r[5][5],m1,n1,m2,n2;
    do
    {
    cout<<"enter the row and column of matrix 1:";
    cin>>m1>>n1;
    cout<<"enter the row and column of matrix 2:";
    cin>>m2>>n2;
    }while(n1!=m2);
    cout<<"matrix 1:\n";
    for(int i=0;i<m1;i++)
    {
        for(int j=0;j<n1;j++)
        {
            cin>>arr[i][j];
        }
    }
    cout<<"matrix 2:\n";
    for(int i=0;i<m2;i++)
    {
        for(int j=0;j<n2;j++)
        {
            cin>>arr[i][j];
        }
    }
    cout<<"result\n";
    for(int i=0;i<m1;i++)
    {
        for(int j=0;j<n2;j++)
        {
            r[i][j]=0;
            for(int k=0;k<m2;k++)
            {
                r[i][j]+=arr[i][k]*arr[k][j];
            }
        }
    }
    for(int i=0;i<m1;i++)
    {
        for(int j=0;j<n2;j++)
        {
            cout<<r[i][j]<<"\t";
        }
        cout<<"\n";
    }
    return 0;
}
