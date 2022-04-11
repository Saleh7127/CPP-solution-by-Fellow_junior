#include <bits/stdc++.h>
using namespace std;
#define ll long long
///www.iamworldian.com/2019/02/uva-0790-how-many-points-of.html
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);

   ll a,c,d,e,f,i=0,j,k,l;

   while(cin>>a>>c)
   {
       if(a+c==0) break;
       d=(a*(a-1)*c*(c-1))/4;
       cout<<"Case "<<++i<<": "<<d<<endl;
   }

   return 0;
}
