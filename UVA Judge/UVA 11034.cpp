/***
 created: 2022-03-26-22.53.55
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
        ll n,m,t,i,j,k,l;

        cin>>l>>m;

        queue<ll>x,y;

        l*=100;

        for(i=0;i<m;i++)
        {
            string a;

            cin >>k >>a;

            if(a=="left") x.push(k);
            else y.push(k);
        }

        ll flag=0;

        n=0;

        while(!x.empty() || !y.empty())
        {

            if(flag==0)
            {
                if(x.empty())
                {
                    flag^=1;
                }
                else
                {
                    k=0;

                    while(!x.empty() &&  k+x.front()<=l)
                    {
                        k+=x.front();
                        x.pop();
                    }

                    flag^=1;
                }
            }
            else if(flag==1)
            {
                if(y.empty())
                {
                    flag^=1;
                }
                else
                {
                    k=0;

                    while(!y.empty() &&  k+y.front()<=l)
                    {
                        k+=y.front();
                        y.pop();
                    }

                    flag^=1;
                }
            }
            n++;
        }

        cout<<n<<nl;
    }

    get_lost_idiot;
}

