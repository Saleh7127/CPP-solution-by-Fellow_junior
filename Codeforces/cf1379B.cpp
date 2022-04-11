#include <bits/stdc++.h>
using namespace std;
#define test int t; cin>>t; while (t--)
#define ll long long int
#define fellow_junior  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
    fellow_junior
    test
    {
        ll l,r,m,a=0,c,d,e,f,g,i,j,k;
        cin>>l>>r>>m;
        for(i=l;i<=r;i++)
        {
            c=m%i;
            if(m>=i && c<=r-l)
            {
                cout<<i<<" "<<l+c<<" "<<l<<endl;
                break;
            }
            d=i-c;
            if(d==i) d=0;
            if(d<=r-l)
            {
                cout<<i<<" "<<r-d<<" "<<r<<endl;
                break;
            }
        }
    }
    return 0;
}
