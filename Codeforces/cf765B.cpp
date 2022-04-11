#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);


    string a;
    cin>>a;
    char c='a';
    ll i;

    for(i=0; i<a.size(); i++)
    {
        if(a[i]>c)
        {
            cout<<"NO"<<endl;
            return 0;
        }
        if(a[i]==c)
        {
            c++;
        }
    }

    cout<<"YES"<<endl;

    return 0;
}
