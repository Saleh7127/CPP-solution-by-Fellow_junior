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

        cin>>a;

        j=k=l=0;

        for(i=0;i<a.size();i++)
        {
             if(a[i]=='A') j++;
             else if(a[i]=='B') k++;
             else l++;
        }

        if(j+l==k) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
   }


   return 0;
}

