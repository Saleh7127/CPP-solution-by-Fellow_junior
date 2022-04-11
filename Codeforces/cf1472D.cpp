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

       ll n,i,j,k,l;
       cin>>n;
       ll a[n+5];
       ll c=0,d=0;
       for(i=0;i<n;i++)
       {
           cin>>a[i];
       }
       sort(a,a+n,greater<int>());
       for(i=0;i<n;i++)
       {
           if(i%2==0 && a[i]%2==0) c+=a[i];
           else if(i%2 && a[i]%2) d+=a[i];
       }

       if(c>d) cout<<"Alice"<<endl;
       else if(c<d) cout<<"Bob"<<endl;
       else cout<<"Tie"<<endl;

   }

   return 0;
}
