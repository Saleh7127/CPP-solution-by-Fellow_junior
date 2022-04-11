#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)

ll converttodec(string x)
{
    ll ans=0;

    for(ll i=0;i<x.size();i++)
    {
        ans=ans*2+(x[i]-'0');
    }

    return ans;
}

int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);

   test
   {
       string a,c;
       ll i,j,k,l,d,e;

       cin>>a>>c;

       d=converttodec(a);
       e=converttodec(c);
       cout<<"Pair #"<<cs<<": ";

       if(__gcd(d,e)==1) cout<<"Love is not all you need!"<<endl;
       else cout<<"All you need is love!"<<endl;

   }


   return 0;
}
