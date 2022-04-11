#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; while(t--)
int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);

   int t,k;
   cin>>t;
   for(k=1;k<=t;k++)
   {
       int n,m,l,a,c,d,i,j;
       cin>>n>>m>>l;
       vector<pair<int,string> >ans;
       while(l--)
       {
           string agnt;
           char x;
           while(cin>>x && x!=':')
           {
               agnt+=x;
           }
           cin>>a>>x>>c;
           d=n;
           int cst=0;
           while((d/2)*a>c && d/2>=m)
           {
               d/=2;
               cst+=c;
           }
           cst+=(d-m)*a;

           ans.push_back(make_pair(cst,agnt));
       }
       sort(ans.begin(),ans.end());
       cout<<"Case "<<k<<endl;
       for(i=0;i<ans.size();i++)
       {
           cout<<ans[i].second<<" "<<ans[i].first<<endl;
       }
   }
   return 0;
}
