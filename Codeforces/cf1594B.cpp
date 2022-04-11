#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int tt; cin>>tt; for(int cs=1;cs<=tt;cs++)
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);


    test
    {
        ll n,m=0,k,i,j=1,l=1e9+7;

        cin>>n>>k;

        while(k)
        {
            if(k&1)
            {
                m=(m+j)%l;
            }

            j=j*n%l;

            k>>=1;
        }

        cout<<m<<endl;
    }

    return 0;
}

