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

        ll n,m,i,j,k,l;

        cin>>n>>m;

        string a="",b="";

        while(n>0)
        {
             k=n%2;
             a+=(k+'0');
             n/=2;
        }

        while(m>0)
        {
             k=m%2;
             b+=(k+'0');
             m/=2;
        }
        reverse(a.begin(),a.end());
        reverse(b.begin(),b.end());

        k=a.size();
        l=b.size();

        if(k>l)
        {
             for(i=0;i<(k-l);i++)
             {
                  b="0"+b;
             }
        }
        else
        {
             for(i=0;i<(l-k);i++)
             {
                  a="0"+a;
             }
        }

        //cout<<a<< " "<<b<<endl;

        l=0;
        vector<ll>x;

        for(i=0;i<a.size();i++)
        {
             if(a[i]=='0' && b[i]=='1')
             {
                  l=1;
                  break;
             }
             else if(a[i]=='1' && b[i]=='0')
             {
                  x.push_back(1);
             }
             else x.push_back(0);
        }

        if(l) cout<<-1<<endl;
        else
        {
             k=0;
             l=0;
             for(i=x.size()-1;i>=0;i--)
             {
                  j=pow(2,l);
                  k+=(j*x[i]);
                  l++;
             }
             cout<<k<<endl;
        }


   }

   //cout<<(18|19)<<" "<<(18^1)<<endl;

   return 0;
}
