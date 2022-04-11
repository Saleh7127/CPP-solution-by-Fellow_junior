#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int tt; cin>>tt; for(int cs=1;cs<=tt;cs++)

string twcom(string a)
{
     ll n=a.size();
     ll i,j=0;

     for(i=n-1;i>=0;i--)
     {
          if(j==0)
          {
               a[i]=a[i];
               if(a[i]=='1') j=1;
          }
          else
          {
               if(a[i]=='1') a[i]='0';
               else a[i]='1';
          }
     }

     return a;
}


int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);

   ll n;

   while(cin>>n)
   {
        string a="";

        ll x,i,j,k,l;

        x=abs(n);

        cout<<n<<" converts to ";

        while(x)
        {
             a+=('0'+x%2);
             x/=2;
        }

        while(a.size()<32) a+='0';

        reverse(a.begin(),a.end());

        if(n<0)
        {
             a=twcom(a);
        }

        for(i=0,j=24,k=16,l=8;i<8;i++,j++,k++,l++)
        {
             swap(a[i],a[j]);
             swap(a[k],a[l]);
        }

        if(a[0]=='1')
        {
             a=twcom(a);
             cout<<"-";
        }

        x=0;
        l=1;

        for(i=a.size()-1;i>=0;i--)
        {
             j=(a[i]-'0')*l;
             x+=j;
             l*=2;
        }

        cout<<x<<endl;

   }

   return 0;
}

/// deal negative number with two's compliment

