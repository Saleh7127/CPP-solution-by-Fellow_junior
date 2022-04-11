#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ll a,b,c,n,m,i,j,k,l,d,x,y,z;

    while(cin>>n && n)
    {
        a=b=c=INT_MAX;
        i=j=k=INT_MIN;

        while(n--)
        {
            cin>>x>>y>>z>>d;

            i=max(i,x);
            j=max(j,y);
            k=max(k,z);

            a=min(a,x+d);
            b=min(b,y+d);
            c=min(c,z+d);
        }

        l=(a-i)*(b-j)*(c-k);

        if(l<0) l=0;

        cout<<l<<endl;

    }

    return 0;
}
