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


        ll n,m=0,i,j,k,l,D,d,p,q;

        cin>>D>>d>>p>>q;

        n=D/d;

        j=D%d;

        k=(n*(2*p + (n-1)*q))/2;
        k*=d;

        m+=k;

        if(j)
        {
             i=j*(p+(q*(n)));
             m+=i;
        }
        cout<<m<<endl;
   }

   return 0;
}
