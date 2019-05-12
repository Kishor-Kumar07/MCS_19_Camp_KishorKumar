#include<iostream>
using namespace std;
int main()
{
    int n,m,arr[10][10];
    cin>>n>>m;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<arr[j][i]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}
