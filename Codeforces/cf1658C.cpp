
/***
 created: 2022-03-27-22.10.53
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



    test
    {
        ll n,m,i,j,l=-1,k,ans=0;

        cin>>n;

        ll a[n+4];

        for(i=0;i<n;i++)
        {
            cin>>a[i];
            if(a[i]==1) l++;
        }

        if(l!=0)
        {
            cout<<"NO"<<nl;
            continue;
        }

        a[n]=a[0];

        for(i=0;i<n;i++)
        {
            if(a[i+1]-a[i]>1)
            {
                ans=1;
                break;
            }
        }



        if(ans==0) cout<<"YES"<<nl;
        else cout<<"NO"<<nl;
    }


    get_lost_idiot;
}
