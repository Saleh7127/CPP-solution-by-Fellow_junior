
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
        string a;
        ll n,m,i,j,k=0,l=0;

        cin>>a;

        for(i=0;i<a.size();i++)
        {
             if(i==0 && a[i]=='0')
             {
                  l++;
                  continue;
             }
             else if(a[i]=='0' && a[i-1]=='0') l+=0;
             else if(a[i]=='0') l++;
             else if(a[i]=='1') l+=0;
        }

        if(l<=2) cout<<l<<endl;
        else cout<<2<<endl;
   }


   return 0;
}

