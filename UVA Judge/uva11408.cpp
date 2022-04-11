#include <bits/stdc++.h>
using namespace std;
#define test int t; cin>>t; while (t--)
#define ll long long int
#define fellow_junior  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define maX 5000001
bool marked[maX+5];
ll sum[maX+5];
ll ans[maX+5];
void sieve()
{
    sum[0]=0;
    sum[1]=0;
    marked[0]=0;
    marked[1]=0;
    for(ll i=2;i<=maX;i++)
    {
        if(marked[i]==0)
        {
            sum[i]=i;
            for(ll j=2*i;j<=maX;j+=i)
            {
                marked[j]=1;
                sum[j]+=i;
            }
        }
    }
    for(ll i=2;i<=maX;i++)
    {
        if(marked[i]==0 || marked[sum[i]]==0)
        {
            ans[i]=ans[i-1]+1;
        }
        else ans[i]=ans[i-1];
    }

}
int main()
{
   fellow_junior
   sieve();
   ll a,c,d,e,f,i,j,k,l;
   while(cin>>a &&a)
   {
       cin>>c;
       cout<<ans[c]-ans[a-1]<<endl;
   }
   return 0;
}
