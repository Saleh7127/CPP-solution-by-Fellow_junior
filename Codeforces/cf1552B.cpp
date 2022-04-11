#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int tt; cin>>tt; for(int cs=1;cs<=tt;cs++)

struct
{
    ll a[5];

} f[50005];

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);


    test
    {
        ll n,m=0,i,j,k=0,l,ans,dd=0,rr=1e15,y=0;

        cin>>n;


        for(i=0; i<n; i++)
        {
            cin>>f[i].a[0]>>f[i].a[1]>>f[i].a[2]>>f[i].a[3]>>f[i].a[4];
        }

        for(i=1;i<n;i++)
        {
             l=0;
             for(j=0;j<5;j++)
             {
                  if(f[y].a[j]>f[i].a[j]) l++;
             }
             if(l>=3) y=i;
        }

        for(i=0;i<n;i++)
        {
             if(i!=y)
             {
                  l=0;
                  for(j=0;j<5;j++)
                  {
                       if(f[y].a[j]>f[i].a[j]) l++;
                  }
                  if(l>=3)
                  {
                       y=-1;
                       break;
                  }
             }
        }


         if(y!=-1) y++;

         cout<<y<<endl;
    }

    return 0;
}
