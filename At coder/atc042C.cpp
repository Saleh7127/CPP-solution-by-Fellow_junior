#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; while(t--)
ll a[12]={0};
ll valid(ll x)
{

    while(x)
    {
        ll r=x%10;
        if(a[r]==1)
        {
            return 0;
        }
        x/=10;
    }
    return 1;
}
int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);

   ll c,d,i,j,k;
   cin>>c>>d;
   for(i=0;i<d;i++)
   {
       cin>>j;
       a[j]=1;
   }
   for(i=c; ;i++)
   {
       if(valid(i))
       {
           cout<<i<<endl;
           return 0;
       }
   }

   return 0;
}
