#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    test
    {
       ll a[200005],b,c,d=0,e,f,i,j,k,l=10000000000000;
       cin>>c>>k;
       for(i=0;i<c;i++)
       {
           cin>>a[i];
       }
       for(i=1;i<=100;i++)
       {
           d=0;
           for(j=0;j<c;j++)
           {
               if(a[j]==i) continue;
               d++;
               j=j+k-1;
           }
           l=min(l,d);
       }

       cout<<l<<endl;

    }


    return 0;
}
