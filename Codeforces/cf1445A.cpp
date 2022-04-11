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

       int a[1000],b[1000],c,d,e,i,j,k,l=0,n;
       cin>>n>>c;
       for(i=0;i<n;i++)
       {
           cin>>a[i];
       }
       for(i=0;i<n;i++)
       {
           cin>>b[i];
       }
       sort(a,a+n);
       sort(b,b+n,greater<int>());
       for(i=0;i<n;i++)
       {
           if(a[i]+b[i]>c)
           {
               cout<<"No"<<endl;
               l=1;
               break;
           }
       }

       if(!l) cout<<"Yes"<<endl;
   }


   return 0;
}
