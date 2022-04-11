#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int tt; cin>>tt; for(int cs=1;cs<=tt;cs++)
pair<ll,ll>x[100005];
int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);

   ll n,m,i,j,k,l;

   x[1]={0,0},x[2]={0,1};
   n=3;
   for(i=1;i<100001;i++)
   {
        for(j=0;j<i;j++)
        {
             x[n]={x[n-1].first-1,x[n-1].second};
             n++;
             if(n>100000) break;
        }
        for(j=0;j<i;j++)
        {
             x[n]={x[n-1].first,x[n-1].second-1};
             n++;
             if(n>100000) break;
        }
        for(j=0;j<i;j++)
        {
             x[n]={x[n-1].first+1,x[n-1].second-1};
             n++;
             if(n>100000) break;
        }
        for(j=0;j<i;j++)
        {
             x[n]={x[n-1].first+1,x[n-1].second};
             n++;
             if(n>100000) break;
        }
        for(j=0;j<i+1;j++)
        {
             x[n]={x[n-1].first,x[n-1].second+1};
             n++;
             if(n>100000) break;
        }
        for(j=0;j<i;j++)
        {
             x[n]={x[n-1].first-1,x[n-1].second+1};
             n++;
             if(n>100000) break;
        }
        if(n>100000) break;
   }


   while(cin>>n)
   {
        cout<<x[n].first<<" "<<x[n].second<<endl;
   }


   return 0;
}
