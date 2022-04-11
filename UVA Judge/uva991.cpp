#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
ll katln[11];
ll catalan(ll n)
{

    if (n <= 1) return 1;

    ll res = 0;

    for (int i = 0; i < n; i++)
    {
        res += catalan(i)* catalan(n - i - 1);
    }

    return res;
}

void precal()
{
    ll i;
    for (i = 0; i <=10; i++)
    {
        katln[i]=catalan(i);
    }
}

int main()
{
    precal();

    ll n,j=0;;
    while(cin>>n)
    {
        if(j) cout<<endl;
        cout<<katln[n]<<endl;
        j++;
    }


}
