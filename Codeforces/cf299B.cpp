#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);


   ll n,k,i,j,l=0;
   string a;
   cin>>n>>k>>a;
   for(i=0;i<n;i++)
   {
       if(a[i]=='#') l++;
       else
       {
           l=0;
       }
       if(l>=k) break;
   }
   if(l>=k) cout<<"NO"<<endl;
   else cout<<"YES"<<endl;
   return 0;
}
