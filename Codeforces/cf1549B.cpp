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
        ll n,m,i,j,k=0,l=0;

        string x,y;

        cin>>n>>x>>y;

        for(i=0; i<n; i++)
        {
            if(y[i]=='1')
            {
                if(x[i]=='1')
                {
                    if(i-1>=0 && x[i-1]=='1')
                    {
                        l++;
                        x[i-1]='.';
                    }
                    else if(i+1<n && x[i+1]=='1')
                    {
                        l++;
                        x[i+1]='.';
                    }
                }
                else l++;
            }
        }

        cout<<l<<endl;
    }

    return 0;
}

