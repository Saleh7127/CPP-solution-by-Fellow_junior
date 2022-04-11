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
       ll n,c=0,d=0,i,k=0;
       cin>>n;

       ll a[n+5],b[n+5];

       for(i=0;i<n;i++)
       {
            cin>>a[i];
            if(a[i]==1) c++;
            else if(a[i]==-1) d++;
       }

       for(i=0;i<n;i++)
       {
           cin>>b[i];
       }

       for(i=n-1;i>=0;i--)
       {
           if(a[i]==1) c--;
           if(a[i]==-1) d--;
           if(a[i]>b[i] && d==0)
           {
               k=1;
               break;
           }
           if(a[i]<b[i] && c==0)
           {
               k=1;
               break;
           }
       }
       if(k==1) cout<<"NO"<<endl;
       else cout<<"YES"<<endl;
   }


   return 0;
}
