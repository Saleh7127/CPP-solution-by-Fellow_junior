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

        string a;
        char c;

        cin>>n>>c;
        cin>>a;

        for(i=0;i<n;i++)
        {
             if(a[i]!=c)
             {
                   l=1;
             }
        }
        if(!l)
        {
             cout<<0<<endl;
        }
        else
        {
             l=n-1;
             while(l>0 && a[l]!=c) l--;
             l++;

             if(l>(n/2)) cout<<1<<endl<<l<<endl;
             else
             {
                  cout<<2<<endl<<n-1<<" "<<n<<endl;
             }
        }
   }

   return 0;
}

