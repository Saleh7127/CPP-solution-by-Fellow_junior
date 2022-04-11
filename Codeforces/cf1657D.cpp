/***
 created: 2022-03-24-12.43.29
***/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int tt; cin>>tt; for(int cs=1;cs<=tt;cs++)
#define get_lost_idiot return 0
#define nl '\n'

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);


    ll n,m,q,i,j,c,c1,h,d,k,l;

    cin>>n>>c;

    ll en[c+2]={0};

    for(i=0; i<n; i++)
    {
        cin>>c1>>d>>h;
        en[c1]=max(en[c1],d*h);
    }


    for(i=1; i<=c; i++)
    {
        for(j=i; j<=c; j+=i)
        {
            en[j]=max(en[j],en[i]*(j/i));
        }
    }

    for(i=1; i<=c; i++)
    {
        en[i]=max(en[i-1],en[i]);
    }

    cin>>q;

    while(q--)
    {
        cin>>d>>h;

        m=upper_bound(en+1,en+c+1,d*h)-en;

        if(m>c) cout<<-1<<" ";
        else cout<<m<<" ";
    }

    cout<<nl;

    get_lost_idiot;
}
