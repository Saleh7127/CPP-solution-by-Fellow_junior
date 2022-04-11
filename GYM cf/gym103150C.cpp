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
        ll n,m,i,j,k,l,e,z,p,c;
        string a;
        cin>>a;

        for(i=0;a[i];i++)
        {
             if(a[i]=='c') c=i;
             if(a[i]=='p') p=i;
             if(a[i]=='z') z=i;
             if(a[i]=='e') e=i;
        }
        if(c<p || c<z || c<e || p<z) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;

        //e=5,c=3,p=16,z=26
   }

   return 0;
}

