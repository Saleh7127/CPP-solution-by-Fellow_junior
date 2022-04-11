#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);


    int t;
    cin>>t;
    for(int cs=1; cs<=t; cs++)
    {

        ll n,m,c,a;

        cin>>n>>m>>c;

        a=(n*m)-1;

        if(a==c) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;

    }

    return 0;
}

