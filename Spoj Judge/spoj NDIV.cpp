#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
int div(int n)
{
    int c=1;
    for(int t=2;t<=sqrt(n);t++)
    {
        if(n%t==0)
        {
            int d=0;
            while(n%t==0) n/=t,d++;

            c*=d+1;
        }
    }
    if(n!=1) c*=2;
    return c;
}
int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);

   int n,j=0,l,r,i;

   cin>>l>>r>>n;
   for(i=l;i<=r;i++)
   {
       if(div(i)==n) j++;
   }
   cout<<j<<endl;

   return 0;
}
