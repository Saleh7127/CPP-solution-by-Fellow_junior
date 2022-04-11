#include <bits/stdc++.h>
using namespace std;
#define test int t; cin>>t; while (t--)
#define ll long long int
#define fellow_junior  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
   fellow_junior
   test
   {
       ll n,s,k,c,d,e,i,j,l;
       map<ll,ll>a;
       cin>>n>>s>>k;
       a.clear();
       for(i=0;i<k;i++)
       {
           cin>>c;
           a[c]=1;
       }
       for(i=0;i<n;i++)
       {
           if(s+i<=n && a.find(s+i)==a.end())
           {
               cout<<i<<endl;
               break;
           }
           else if(s-i>=1 && a.find(s-i)==a.end())
           {
               cout<<i<<endl;
               break;
           }
       }
   }


   return 0;
}
