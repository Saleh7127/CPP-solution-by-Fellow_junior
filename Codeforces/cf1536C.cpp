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
        ll n,m,i,j,k=0,l=0,b,c;
        string a;

        map<pair<ll,ll>,ll>x;

        cin>>n>>a;

        for(i=0;i<n;i++)
        {
            if(a[i]=='D') k++;
            else l++;

            b=k/__gcd(k,l);
            c=l/__gcd(k,l);

            m=x[{b,c}]+1;

            cout<<m<<" ";

            x[{b,c}]++;

        }
        cout<<endl;
   }

   return 0;
}

