#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
ll a[200000];
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    test
    {
       ll c,d,e,f,i,j=0,k,l=0;
       cin>>c>>d;
       for(i=0;i<c;i++)
       {
           cin>>a[i];
       }
       for(i=0;i<c-1;i++)
       {
           if(a[i]>=d)
           {
               j++;
               a[i+1]+=(a[i]-d);
           }
           else if(a[i]<d)
           {
               l=1;
               j++;
               break;
           }
       }
       if(l)
       {
           cout<<j<<endl;
           continue;
       }
       j+=(a[c-1]/d);
       cout<<j+1<<endl;
    }
    return 0;
}

