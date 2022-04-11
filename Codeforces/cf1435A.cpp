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

        ll a[10000],c,d,e,f,i,j,k,l;
        cin>>c;
        for(i=1;i<=c;i++)
        {
            cin>>a[i];
        }
        for(i=c;i>=1;i--)
        {
            if(i>c/2) cout<<-1*a[i]<<" ";
            else cout<<a[i]<< " ";
        }
        cout<<endl;
    }

    return 0;
}
