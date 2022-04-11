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

        ll n,k,c,d,e,f,i,j;
        map<ll,ll>a;
        cin>>n>>k;
        for(i=0; i<n; i++)
        {
            cin>>c;
            d=c%k;
            if(d==0) continue;
            a[k-d]++;
        }
        j=0;
        for(auto z: a)
        {
            c=z.first;
            d=z.second;
            f=(d-1)*k+c;
            j=max(j,f+1);
        }
        cout<<j<<endl;
    }


    return 0;
}
