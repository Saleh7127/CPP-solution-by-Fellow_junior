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
        string a,b="";


        ll n,m,i,j,k,l;
        cin>>a;
        n=a.size();

        if(n==1)
        {
             cout<<a<<endl;
             continue;
        }

        for(i=0;i<n;i++)
        {
             if(a[i]!=a[i+1])
             {
                  if(find(b.begin(),b.end(),a[i])==b.end())
                  {
                       b.push_back(a[i]);
                  }
             }
             else i++;
        }
        //if(a[n-1]!=a[n-2]) b.push_back(a[n-1]);
        sort(b.begin(),b.end());

        cout<<b<<endl;
   }

   return 0;
}

