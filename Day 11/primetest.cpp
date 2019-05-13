#include<iostream>
using namespace std;
void sieve(int N) 
{
        bool isPrime[N+1];
        int count=0;
        for(int i=0;i<=N;++i) 
        {
            isPrime[i]=true;
        }
        isPrime[0]=false;
        isPrime[1]=false;
        for(int i=2;i*i<=N;++i)
        {
             if(isPrime[i]==true)
             {                  
                 for(int j=i+i;j<=N;j+=i)
                     {
                         isPrime[j]=false;
                      }
             }
        }
        for(int i=0;i<=N;++i) 
        {
            if(isPrime[i]==true)
            {
                count++;
            }
        }
        cout<<count;
    }
int main()
{
    int n;
    cin>>n;
    sieve(n);
    return 0;
}
