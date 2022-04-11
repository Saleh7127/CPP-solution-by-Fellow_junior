#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int tt; cin>>tt; for(int cs=1;cs<=tt;cs++)
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);


    map<char,bool>x;
    char ch;
    ll n,m,i,j,k=0,l=0;

    string a;

    cin>>n>>m>>a;

    while(m--)
    {
        cin>>ch;
        x[ch]=1;
    }

    for(i=0; i<n; i++)
    {
        if(x[a[i]])
        {
            l++;
        }
        else
        {
            l=l*(l+1)/2;
            k+=l;
            l=0;
        }
    }

    if(l)
    {
        l=l*(l+1)/2;
        k+=l;
    }


    cout<<k<<endl;

    return 0;
}

