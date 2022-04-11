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

       ll p,a,b,c,d,e,f,i,j,k,l=1e18+5;

       cin>>p>>a>>b>>c;

       if(a>=p) l=min(l,abs(p-a));
       else
       {
           if(p%a==0) f=p/a;
           else f=1+p/a;

           l=min(l,f*a-p);
       }
       if(b>=p) l=min(l,abs(p-b));
       else
       {
           if(p%b==0) f=p/b;
           else f=1+p/b;

           l=min(l,f*b-p);
       }
       if(c>=p) l=min(l,abs(p-c));
       else
       {
           if(p%c==0) f=p/c;
           else f=1+p/c;

           l=min(l,f*c-p);
       }
       cout<<l<<endl;
   }

   return 0;
}
