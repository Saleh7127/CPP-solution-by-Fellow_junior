#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int tt; cin>>tt; for(int cs=1;cs<=tt;cs++)
int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);


   ll f[100];

   map<ll,ll>x;

   ll a[20000],i,j,k=1e10,l,n,m;

   f[1]=1;
   f[2]=2;

   x[1]=1;
   x[2]=2;

   for(i=3;i<=51;i++)
   {
        f[i]=f[i-1]+f[i-2];
        x[f[i]]=i;
   }


   test
   {
        cin>>n;

        l=0;
        for(i=1;i<=n;i++)
        {
             cin>>a[i];
             l=max(l,x[a[i]]);
        }


        string s="",b;

        for(i=0;i<=l;i++) s+='!';

        getline(cin,b);
        getline(cin,b);

        j=1;
        for(i=0;i<b.size() && j<=n;i++)
        {
             if(b[i]>='A' && b[i]<='Z')
             {
                  s[x[a[j]]]=b[i];
                  j++;
             }
        }

        for(i=1;i<=l;i++)
        {
             if(s[i]=='!') cout<<' ';
             else cout<<s[i];
        }
        cout<<endl;
   }

   return 0;
}
