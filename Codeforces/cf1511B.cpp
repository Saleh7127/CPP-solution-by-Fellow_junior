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

        ll a,b,c,i,j,k,l,n,m;

        cin>>a>>b>>c;

        string x="1",y="1";

        for(i=1; i<=a-1; i++)
        {
            x+='0';
        }
        for(i=1; i<=b-c; i++)
        {
            y+='1';
        }
        for(i=1; i<=c-1; i++)
        {
            y+='0';
        }
        cout<<x<<" "<<y<<endl;
    }

    return 0;
}
