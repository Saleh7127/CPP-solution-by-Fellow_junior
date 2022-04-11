#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)

string addd(string a,string c)
{

    ll s1,s2,l,i,j,k=0;
    string sum="";

    reverse(a.begin(),a.end());
    reverse(c.begin(),c.end());

    s1=a.size();
    s2=c.size();
    l=max(s1,s2);

    for(i=0; i<l; i++)
    {
        if(i<s1)
        {
            k+=(a[i]-'0');
        }
        if(i<s2)
        {
            k+=(c[i]-'0');
        }
        sum+=((k%10)+'0');
        k/=10;
    }

    if(k)
    {
        sum+=(k+'0');
    }
    reverse(sum.begin(),sum.end());

    for(i = 0; i <sum.size(); i++)
    {
        if(sum[i]!= '0')
        {
            return sum.substr(i);
        }
    }
    return "0";
}


int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);

   string f[2222];

   f[0]=f[1]="1";
   f[2]="3";

   for(ll i=3;i<=251;i++)
   {
       f[i]=addd(f[i-1],f[i-2]);
       f[i]=addd(f[i],f[i-2]);

       /// possible combination are 2/1 for 2*1 and for 2*2 2/1,2/2;
       /// for this calculate i-2, 2 times
   }

   ll n;
   while(cin>>n)
   {
       cout<<f[n]<<endl;
   }

   return 0;
}
