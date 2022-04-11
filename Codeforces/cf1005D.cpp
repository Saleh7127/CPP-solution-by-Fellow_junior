#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int tt; cin>>tt; for(int cs=1;cs<=tt;cs++)
int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);

   string a;
   ll n,m,i,j,k,l=0,one=0,two=0;

   cin>>a;

   for(i=0;i<a.size();i++)
   {
        m=a[i]-'0';
        k=0;
        if(m%3==0) k=1;
        else if(m%3==1)
        {
             if(two>=1) k=1;
             else if(one>=2) k=1;
             one++;
        }
        else
        {
             if(one>=1) k=1;
             else if(two>=2) k=1;
             two++;
        }

        if(k)
        {
             l++;
             one=two=0;
        }
   }

   cout<<l<<endl;


   return 0;
}
