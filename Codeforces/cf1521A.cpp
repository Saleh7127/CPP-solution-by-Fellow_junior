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

       k=(n*m);

       l=k-n;

       if(m==1) cout<<"NO"<<endl;
       else
       {
           cout<<"YES"<<endl;
           cout<<(5*k-n)<<" "<<n<<" "<<5*k<<endl;
       }

   }

   return 0;
}

