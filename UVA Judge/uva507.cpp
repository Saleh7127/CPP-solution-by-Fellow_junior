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


        ll n,m=0,i,j,k,l=0;

        cin>>n;

        ll a[n+4];

        ll st=0,en=0,cur=1,ans=INT_MIN;

        for(i=2;i<=n;i++) cin>>a[i];

        for(i=2;i<=n;i++)
        {
             m+=a[i];

             if(m<0)
             {
                  cur=i;
                  m=0;
             }
             else if(m>ans)
             {
                  ans=m;
                  st=cur;
                  en=i;
                  l=en-st;
             }
             else if(m==ans && (i-cur>l))
             {
                  ans=m;
                  st=cur;
                  en=i;
                  l=en-st;
             }
        }

        if(ans<=0) cout<<"Route "<<cs<<" has no nice parts"<<endl;
        else
        {
             cout<<"The nicest part of route "<<cs<<" is between stops "<<st<<" and "<<en<<endl;
        }
   }

   return 0;
}
