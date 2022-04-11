#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ll fiv[100];
    ll i,j,k,l,c,d,e;
    vector<ll>a;
    fiv[0]=1;
    fiv[1]=1;
    for(i=2; i<=92; i++)
    {
        fiv[i]=fiv[i-1]+fiv[i-2];
    }

    while(cin>>c)
    {
        d=c;
        a.clear();
        for(i=91; i>=0 && c>0; i--)
        {
            if(fiv[i]<=c)
            {
                while(fiv[i]<=c)
                {
                    a.push_back(i);
                    c-=fiv[i];
                }
            }
        }
        cout<<d<<endl;
        for(i=0; i<a.size(); i++)
        {
            cout<<a[i]<<" ";
        }
        cout<<endl;
        for(i=0; i<a.size(); i++)
        {
            cout<<fiv[a[i]]<<" ";
        }
        cout<<endl;
        cout<<endl;
    }

    return 0;
}
