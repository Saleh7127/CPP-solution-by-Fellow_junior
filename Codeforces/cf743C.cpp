#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);


   ll n;

   cin>>n;


   if(n==1)
   {
       cout<<-1<<endl;
       return 0;
   }

   /// 2/n=1/n+1/2;

   /// egyptian fraction rule: 1/n= (1/(n+1)) + (1/(n*(n+1)));

   /// 2/n = 1/n + (1/(n+1)) + (1/(n*(n+1)));

   cout<<n<<" "<<n+1<<" "<<n*(n+1)<<endl;

   return 0;
}
