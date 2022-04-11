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

       ll n,m,i,j,k=0,l=0;

       cin>>n;

       ll x[n+5],y[n+5];

       cout<<"Case "<<cs<<": ";

       for(i=0;i<n;i++)
       {
           cin>>x[i]>>y[i];
       }

       vector<pair<double,double> >ans;

       for(i=0;i<n;i++)
       {
           for(j=0;j<i;j++)
           {
             double x1=(x[i]+x[j])/2.00;
             double y1=(y[i]+y[j])/2.00;
             ans.push_back({x1,y1});
           }
       }

       sort(ans.begin(),ans.end());

       for(i=0;i<ans.size()-1;i++)
       {
           if(ans[i]==ans[i+1]) k++;
           else
           {
               l+=(k*(k-1)/2);
               k=1;
           }
       }

       if(k) l+=(k*(k-1)/2);
       cout<<l<<endl;
   }

   return 0;
}
