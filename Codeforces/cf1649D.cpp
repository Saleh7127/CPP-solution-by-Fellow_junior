/***
 created: 2022-03-07-03.31.06
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
        ll n,a,m,i,c,j,k,l=0;

        cin>>n>>c;

        vector<ll>x(c+2,0);

        for(i=0;i<n;i++)
        {
            cin>>a;
            x[a]++;
        }

        vector<ll>psum(c+2,0);

        for(i=1;i<=c;i++)
        {
            psum[i] = psum[i-1] + x[i];
        }

        for(i=1;i<=c;i++)
        {
            if(x[i]>0)
            {
                for(j=i;j<=c;j+=i)
                {
                    m=j;
                    k=min(j+i-1,c);

                    if((psum[k]-psum[m-1])>0 && !x[j/i])
                    {
                        l=1;
                        break;
                    }
                }

                if(l) break;
            }
        }


        if(l==0)  cout<<"Yes"<<nl;
        else cout<<"No"<<nl;

     }

    get_lost_idiot;
}
