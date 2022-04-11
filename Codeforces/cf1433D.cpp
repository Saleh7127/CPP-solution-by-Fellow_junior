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

        ll a[50000],c,d=-100,e,f,i,j,k,l;
        cin>>c;
        for(i=1;i<=c;i++)
        {
            cin>>a[i];
            if(d<0 && a[i]!=a[1])
            {
                d=i;
            }
        }
        if(d<0) cout<<"NO"<<endl;
        else
        {
            cout<<"YES"<<endl;
            for(i=2;i<=c;i++)
            {
                if(a[i]!=a[1]) cout<<1<<" "<<i<<endl;
                else cout<<d<<" "<<i<<endl;
            }


        }
    }


    return 0;
}
