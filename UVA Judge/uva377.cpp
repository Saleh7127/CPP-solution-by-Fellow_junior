#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll number(string a)
{
    ll ans=0;
    for(ll i=0;i<a.size();i++)
    {
        ans*=4;
        if(a[i]=='U')
        {
            ans++;
        }
        else if(a[i]=='C')
        {
            ans+=2;
        }
        else if(a[i]=='D')
        {
            ans+=3;
        }
    }
    return ans;
}

int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);

   ll t,i;
   cin>>t;

   string a;
   cout<<"COWCULATIONS OUTPUT"<<endl;
   while(t--)
   {
       ll n1,n2;
       cin>>a;
       n1=number(a);
       cin>>a;
       n2=number(a);
       for(i=0;i<3;i++)
       {
           char x;
           cin>>x;
           if(x=='A')
           {
               n2+=n1;
           }
           else if(x=='L')
           {
               n2*=4;
           }
           else if(x=='R')
           {
               n2/=4;
           }
       }
       cin>>a;
       n1=number(a);
       if(n1==n2) cout<<"YES"<<endl;
       else cout<<"NO"<<endl;
   }
   cout<<"END OF OUTPUT"<<endl;

   return 0;
}
