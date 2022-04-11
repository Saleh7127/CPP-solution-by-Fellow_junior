#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n;
    cin>>n;
    ll p=1,i=0;
    ll c[10] = {1,1,1,1,1,1,1,1,1,1};
    while(p<n)
    {
        p=p/c[i];
        c[i]++;
        p=p*c[i];
        i++;
        i=i%10;
    }
    string x= "codeforces";
    for (ll i=0; i<10;i++)
    {
        for (ll j=0;j<c[i];j++)
        {
            cout<<x[i];
        }
    }
    cout<<endl;
    return 0;
}

