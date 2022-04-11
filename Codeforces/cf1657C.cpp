/***
 created: 2022-03-22-21.37.03
***/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define test int tt; cin>>tt; for(int cs=1;cs<=tt;cs++)
#define get_lost_idiot return 0
#define nl '\n'

string a;
ull n;
ull h1[500005],h2[500005],p1[500005];
ull base=149;
void hashing()
{
    p1[0]=1;
    h1[0]=h2[0]=0;
    for(ll i = 1; i <= n; i++)
    {
        p1[i] = (p1[i-1] * base);
    }
    for(ll i = 1; i <= n; i++)
    {
        if(a[i-1]=='(') h1[i] = (h1[i-1] * base + 2) ;
        else h1[i] = (h1[i-1] * base + 1) ;
    }
    for(ll i = n; i >= 1; i--)
    {
        if(a[i-1]=='(') h2[i] = (h2[i+1] * base + 2) ;
        else h2[i] = (h2[i+1] * base + 1) ;
    }
}


ull hash1(ll l,ll r)
{
    return (h1[r] - h1[l-1] * p1[r-l+1]);
}

ull hash2(ll l,ll r)
{
    return (h2[l] - h2[r+1] * p1[r-l+1]);
}


int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);



    test
    {
        cin>>n>>a;

        hashing();

        ll i,j=0,k=0,l,last=n,m=0,y=0;

        for(i=0; i<n; i++)
        {
            if(a[i]=='(') j++;
            else j--;

            if(j<0) k=1;

            if(j==0)
            {
                if(k==0)
                {
                    last-=(i-m+1);
                    m=i+1;
                    y++;
                    continue;
                }
            }
            if(hash1(m + 1, i + 1)==hash2(m+1,i+1) && (i-m+1) >= 2)
            {
                last-=(i-m+1);
                m = i + 1;
                k = 0;
                j= 0;
                y++;
            }

        }

        cout<<y<<" "<<last<<nl;
    }

    get_lost_idiot;
}

