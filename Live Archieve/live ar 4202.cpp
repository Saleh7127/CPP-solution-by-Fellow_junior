#include<bits/stdc++.h>
using namespace std;
#define ll  long long
int main()
{
    ll a,b,c,d,e,f,g,h,i,j,k,l,t,h1,h2,m1,m2;
    cin>>t;
    char ch;
    for(i=1;i<=t;i++)
    {
       cin>>a>>ch>>b>>c>>ch>>d;
       cin>>e>>ch>>f>>g>>ch>>h;
       h1=a*60+b;
       h2=c*60+d;
       m1=e*60+f;
       m2=g*60+h;
       if((h1>m1 && h1>m2) || (m1>h1 && m1>h2))
       {
           printf("Case %d: Hits Meeting\n",i);
       }
       else
       {
           printf("Case %d: Mrs Meeting\n",i);
       }
    }
    return 0;
}
