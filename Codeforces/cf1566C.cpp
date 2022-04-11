#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int tt; cin>>tt; for(int cs=1;cs<=tt;cs++)
int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);

   test
   {
        ll n,m,i,j,k,l=0;
        string a,b;

        cin>>n>>a>>b;

        vector<ll>x(n);

        for(i=0;i<n;i++)
        {
             if(a[i]!=b[i]) x[i]=2;
             else x[i]=1-(a[i]-'0');
        }

        vector<ll>y;
        for(i=0;i<n;i++)
        {
             if(x[i]==2) l+=2;
             else if(x[i]==1) y.push_back(i);
        }

        vector<bool>v(n,0);

        for(auto d:y)
        {
             if(d>0 && v[d-1]==0 && x[d-1]==0)
             {
                  l+=2;
             }
             else if(d+1<n && x[d+1]==0)
             {
                  l+=2;
                  v[d+1]=1;
             }
             else l++;
        }
        cout<<l<<endl;
   }


   return 0;
}

