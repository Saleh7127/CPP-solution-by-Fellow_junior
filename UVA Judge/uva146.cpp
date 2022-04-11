#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int tt; cin>>tt; for(int cs=1;cs<=tt;cs++)
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string a;

    while(cin>>a)
    {
        if(a=="#") break;

        ll i=0;

        while(next_permutation(a.begin(),a.end()))
        {
            i=1;
            cout<<a<<endl;
            break;
        }

        if(i==0) cout<<"No Successor"<<endl;
    }

    return 0;
}
