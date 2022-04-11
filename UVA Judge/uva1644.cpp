#include <bits/stdc++.h>
using namespace std;
#define test int t; cin>>t; while (t--)
#define ll long long int
#define fellow_junior  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define maX 2000008
bool marked[maX];
void sieve()
{
    marked[0]=1;
    marked[1]=1;
    for(ll i=4;i<=maX;i+=2)
    {
        marked[i]=1;
    }
    for(ll i=3;i<=maX;i+=2)
    {
        if(marked[i]==0)
        {
            for(ll j=i*i; j<=maX; j+=i+i)
            {
               marked[j]=1;
            }
        }
    }
}
int main()
{
   fellow_junior
   sieve();
   ll a,i,j,k,l;
   while(cin>>a &&a)
   {
       if(marked[a]==0) cout<<0<<endl;
       else
       {
           for(i=a-1;i>=0;i--)
           {
               if(marked[i]==0)
               {
                   j=i;
                   break;
               }
           }
           for(i=a+1; ;i++)
           {
               if(marked[i]==0)
               {
                   k=i;
                   break;
               }
           }
           cout<<k-j<<endl;
       }
   }
   return 0;
}
