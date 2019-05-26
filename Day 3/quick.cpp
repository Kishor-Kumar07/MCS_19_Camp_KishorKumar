#include<iostream>
using namespace std;
int A[10];
int partition ( int start ,int end)
{
    int i = start+1 ;
    int piv = A[start] ;           
    for(int j =start+1 ; j <= end ; j++ )  
    {
          if ( A[ j ] < piv)
          {
                 swap (A[ i ],A [ j ]);
            i += 1;
        }
   }
   swap ( A[ start ] ,A[ i-1 ] ) ;  
   return i-1;                      
}
void print(int n)
{
    for(int i=1;i<=n;i++)
    {
        cout<<A[i]<<" ";    
    }
}
void quick_sort ( int start , int end )
{
   if( start < end ) 
   {
         int piv_pos = partition (start , end ) ;     
         quick_sort (start , piv_pos -1);   
         quick_sort (piv_pos +1 , end) ; 
   }
}
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>A[i];    
    }
    quick_sort(0,n);
     print(n);
}
