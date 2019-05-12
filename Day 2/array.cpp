
                    #include<iostream>
using namespace std;
int main()
{
  int n,*p;
  cin>>n;
  if(n<=100)
  p=new int[n];
  for(int i=0;i<n;i++)
  cin>>p[i];
  for(int i=n-1;i>=0;i--)
  cout<<p[i]<<"\n";
}
