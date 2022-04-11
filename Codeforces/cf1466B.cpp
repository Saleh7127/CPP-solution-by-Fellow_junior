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

        ll n,m,k,i,j,l=1,c,d,e;
        cin>>n;

        map<ll,ll>a;

        while(n--)
        {
            cin>>c;
            if(a[c]!=0) a[++c]++;
            else a[c]++;
        }
        cout<<a.size()<<endl;
    }


    return 0;
}
