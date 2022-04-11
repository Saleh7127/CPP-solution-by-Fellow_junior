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
        ll n,m,i,j,k,l;

        string a;

        cin>>n;
        cin>>a;

        l=0;

        for(i=0;i<a.size()-1;i++)
        {
             if(a[i]=='a' && a[i+1]=='b')
             {
                  cout<<i+1<<" "<<i+2<<endl;
                  l=1;
                  break;
             }
             else if(a[i]=='b' && a[i+1]=='a')
             {
                  cout<<i+1<<" "<<i+2<<endl;
                  l=1;
                  break;
             }

        }
        if(l==0) cout<<"-1 -1"<<endl;

   }


   return 0;
}
