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

       cin>>n;

       if(n%2==1)
       {
           cout<<"NO"<<endl;
           continue;
       }

       while(n%2==0)
       {
           n/=2;
       }
       k=floor(sqrt((double)n)+0.5);

       if(k*k==n) cout<<"YES"<<endl;
       else cout<<"NO"<<endl;
   }


   return 0;
}

/*
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);


   map<ll,ll>x;
   ll d;

   x[2]=1;

   for(ll i=1;;i++)
   {
       d=(i*i)*4;
       x[d]=1;
       if(d>1e9) break;
   }

   for(ll i=1;;i++)
   {
       d=(i*2)*i;
       x[d]=1;
       if(d>1e9) break;
   }

   test
   {
       ll n,m,i,j,k,l;

       cin>>n;

       if(x[n]==1) cout<<"YES"<<endl;

       else cout<<"NO"<<endl;
   }

   return 0;
}

*/
