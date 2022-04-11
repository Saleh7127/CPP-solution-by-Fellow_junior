#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)

string a;
char c[105][8];
bool v[1000];
ll n,l;

void bcktck(ll i)
{
    if(i==l)
    {
        cout<<"YES"<<endl;
        exit(0);
    }
    for(ll j=0;j<n;j++)
    {
        if(v[j]) continue;
        for(ll k=0;k<6;k++)
        {
            if(c[j][k]==a[i])
            {
                v[j]=1;
                bcktck(i+1);
                v[j]=0;
            }
        }
    }
    return;
}

int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);

   cin>>a>>n;
   l=a.size();
   for(ll i=0;i<n;i++)
   {
       for(ll j=0;j<6;j++)
       {
           cin>>c[i][j];
       }
   }

   bcktck(0);

   cout<<"NO"<<endl;

   return 0;
}
