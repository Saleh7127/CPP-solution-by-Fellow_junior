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

        ll x,y,z,i,j,k,l,a,b=0;
        cin>>x>>y>>z;

        for(i=-100; i<=100; i++)
        {
            for(j=-100; j<=100; j++)
            {
                for(k=-100; k<=100; k++)
                {
                    if((i+j+k)==x && (i*j*k)==y && (i*i+j*j+k*k)==z && i!=j && j!=k && i!=k)
                    {
                        cout<<i<<" "<<j<<" "<<k<<endl;
                        b=1;
                        goto aa;
                    }
                }
            }
        }
        aa:
        if(b==0) cout<<"No solution."<<endl;

    }


    return 0;
}
