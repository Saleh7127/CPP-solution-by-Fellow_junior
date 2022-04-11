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
       ll n,r,c,x,y,a,d,e,f;
       cin>>r>>c>>x>>y;
       n=r*c;
       if(y>=(2*x))
       {
           cout<<n*x<<endl;
       }
       else if(y>=x && y<2*x)
       {
           a=y-x;
           e=((n+1)/2)*(x);
           d=(n/2)*(a);
           f=((n+1)/2)*x;
           cout<<max(f,e+d)<<endl;
       }
       else
       {
           e=((y+1)/2)*((n+1)/2);
           d=(y/2)*(n/2);
           f=((n+1)/2)*y;
           cout<<max(f,e+d)<<endl;
       }
   }


   return 0;
}
