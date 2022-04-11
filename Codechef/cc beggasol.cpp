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
        ll b,c,d=0,e=0,f,i,j,k,l;

        cin>>c;

        ll a[c+5];

        for(i=0; i<c; i++)
        {
            cin>>a[i];
        }

        for(i=0; i<c; i++)
        {
            d+=a[i];
            e+=a[i];
            e-=1;

            if(a[i]==0 && e==0)
            {
                break;
            }
        }
        cout<<d<<endl;
    }

    return 0;
}
