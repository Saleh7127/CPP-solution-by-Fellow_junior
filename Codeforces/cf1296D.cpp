#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int tt; cin>>tt; for(int cs=1;cs<=tt;cs++)
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ll n,m,i,j,k,l=0,a,b;

    cin>>n>>a>>b>>k;

    ll x[n+4];

    vector<ll>y;

    for(i=0; i<n; i++)
    {
        cin>>x[i];

        x[i]%=(a+b);
        j=0;
        if(x[i]==0)
        {
             j++;
             x[i]=b;
        }
        j+=(x[i]-1)/a;
        y.push_back(j);
    }


    sort(y.begin(),y.end());


    for(auto dd:y)
    {
         if(dd<=k)
         {
              l++;
              k-=dd;
         }
    }


    cout<<l<<endl;


    return 0;
}
