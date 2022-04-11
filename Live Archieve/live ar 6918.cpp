#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);


   test
   {
        ll n,m,i,j,k,l;

        cin>>n>>m;

        ll a[69],b[69];

        memset(a,0,sizeof a);
        memset(b,0,sizeof b);

        i=0;
        while(n>0)
        {
            a[i]=n%2;
            n/=2;
            i++;
        }

        i=0;
        while(m>0)
        {
             b[i]=m%2;
             m/=2;
             i++;
        }

        ll oor[69];
        ll aand[69];

        memset(oor,0,sizeof oor);
        memset(aand,0,sizeof aand);

        for(i=63;i>=0;i--)
        {
             if(a[i]==b[i])
             {
                  oor[i]=a[i];
                  aand[i]=a[i];
             }
             else
             {
                  for(j=i;j>=0;j--)
                  {
                       oor[j]=1;
                       aand[j]=0;
                  }
             }
        }
        ll p[65];
        memset(p,0,sizeof p);

        for(i=0;i<64;i++) p[i]=pow(2,i);

        ll orr=0,andd=0;

        for(i=0;i<64;i++)
        {
             orr+=(p[i]*oor[i]);
             andd+=(p[i]*aand[i]);
        }

        cout<<"Case "<<cs<<": "<<orr<<" "<<andd<<endl;
   }


   return 0;
}
