#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; while(t--)
int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);

   ll a,c,d,e,f;
   while(cin>>a>>c>>d)
   {
       if(a==0 && c==0 && d==0) break;
       e=(a-7)*(c-7);
       if(d%2==0) cout<<e/2<<endl;
       else cout<<(e+1)/2<<endl;
   }


   return 0;
}
