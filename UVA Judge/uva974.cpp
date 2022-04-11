#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
ll k[100005]={0};

bool check(ll a,ll b)
{
    ll d=0,r=0,v=10;
    while(a/v)
    {
        r=a%v;
        d=a/v;
        v*=10;
        if(d && r)
        {
            if(r+d==b) return 1;
        }
    }
    return 0;
}

void kaprekarnumber()
{

    k[9]=k[45]=k[55]=1;
    ll i,j;
    for(i=91;i<=40000;i++)
    {
        j=i*i;
        if(check(j,i))
        {
            k[i]=1;
        }
    }
}

int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);

   kaprekarnumber();

   test
   {
       ll a,b,i,j=0;
       cin>>a>>b;
       if(cs>1) cout<<endl;

       cout<<"Case #"<<cs<<endl;
       for(i=a;i<=b;i++)
       {
           if(k[i]==1)
           {
               j++;
               cout<<i<<endl;
           }
       }
       if(!j) cout<<"no kaprekar numbers"<<endl;
   }


   return 0;
}
