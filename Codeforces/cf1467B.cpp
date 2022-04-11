#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
ll a[500000],n;
bool s(ll x)
{
    if(x>1 && x<n && ((a[x]>a[x-1] && a[x]>a[x+1]) || (a[x]<a[x-1] && a[x]<a[x+1])))
    {
        return 1;
    }
    else return 0;
}
int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);

   test
   {
       ll c=0,d,e,i,j,k,l,m;
       cin>>n;

       for(i=1;i<=n;i++)
       {
           cin>>a[i];
       }
       for(i=1;i<=n;i++)
       {
           if(s(i))
           {
               c++;
           }
       }
       l=0;

       for(i=2;i<n;i++)
       {
           d=s(i)+s(i-1)+s(i+1);
           m=a[i];
           a[i]=a[i-1];
           e=s(i)+s(i-1)+s(i+1);
           l=max(l,d-e);
           a[i]=a[i+1];
           e=s(i)+s(i-1)+s(i+1);
           l=max(l,d-e);
           a[i]=m;
       }
       cout<<c-l<<endl;
    }

   return 0;
}
