#include<iostream>
using namespace std;
int main()
{
 int temp,count=0,n,a[10];
 cin>>n;
 for(int i=0;i<n;i++)
 cin>>a[i];
    for(int k = 0; k< n-1; k++) {
        // (n-k-1) is for ignoring comparisons of elements which have already been compared in earlier iterations

        for(int i = 0; i < n-k-1; i++) {
            if(a[ i ] > a[ i+1] ) {
                // here swapping of positions is being done.
                count++;
                temp = a[ i ];
                a[ i ] = a[ i+1 ];
                a[ i + 1] = temp;
            }
        }
    }
    cout<<count;
}
