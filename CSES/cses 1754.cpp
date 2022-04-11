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
        ll a,c,i,j,k,l;

        cin>>a>>c;
        if((a+c)%3==0 && min(a,c)*2>=max(a,c)) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;

    }

    return 0;
}
