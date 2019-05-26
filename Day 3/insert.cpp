#include<iostream>
using namespace std;
int main()
{
    int n,A[10],b[10];
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>A[i];
        b[i]=A[i];
    }
     for( int i = 0 ;i < n ; i++ ) 
     {
      int temp = A[ i ];    
      int j = i;
          while(  j > 0  && temp < A[ j -1])
          {
                A[ j ] = A[ j-1];   
                j= j - 1;
          }
           A[ j ] = temp;       
     }
         for(int j=0;j<n;j++)
         {
             if(b[j]=A[j])
             {
                 cout<<j+1<<" ";
             }
         }
     }


