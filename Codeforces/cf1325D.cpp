#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);



   ll u,v,n,m,i,j,k,l;

   cin>>u>>v;

   if(u%2!=v%2 || u>v) cout<<-1<<endl;
   else if(u==v && u==0)
   {
        cout<<0<<endl;
   }
   else if(u==v) cout<<1<<"\n"<<u<<endl;
   else
   {
        m=(v-u)/2;

        if(u&m) cout<<3<<"\n"<<u<<" "<<m<<" "<<m<<endl;

        else cout<<2<<"\n"<<(u^m)<<" "<<m<<endl;

   }

   return 0;
}
