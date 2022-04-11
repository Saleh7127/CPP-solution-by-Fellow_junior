/***
 created: 2022-01-28-18.28.36
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
        int n,k,i,j;

        cin>>n>>k;

        if(n==4 && k==3)
        {
            cout<<-1<<nl;
            continue;
        }

        int a[(n/2)+4][3];

        for(i=0; i<n/2; i++)
        {
            a[i][0]=i;
            a[i][1]=n-i-1;
        }

        if(k==n-1)
        {
            swap(a[0][0],a[1][1]);
            swap(a[2][1],a[1][1]);
        }

        else if(k>0)
        {
            a[0][0]=k;
            for(i=1; i<n/2; i++)
            {
                if(a[i][0]==k)
                {
                    a[i][0]=0;
                    break;
                }
                else if(a[i][1]==k)
                {
                    a[i][1]=0;
                    break;
                }
            }
        }

        for(i=0; i<n/2; i++)
        {
            cout<<a[i][0]<<" "<<a[i][1]<<nl;
        }
    }
    get_lost_idiot;
}
