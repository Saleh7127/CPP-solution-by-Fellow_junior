#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    map<string,ll>x;

    string a,b[100],c,d;
    ll e,f=0,i,j,k,l;

    cin>>a;

    for(i=0; i<10; i++)
    {
        cin>>b[i];
    }

    for(k=0; k<=80; k+=10)
    {
        l=f*10+10;
        for(j=k; j<l; j++)
        {
            c+=a[j];
        }
        for(i=0; i<10; i++)
        {
            if(c==b[i])
            {
                cout<<i;
            }
        }
        f++;
        c.clear();
    }

    /*

    string a,c,d;
    ll i,j,k;
    cin>>c;
    for(i=0;i<10;i++)
    {
        cin>>a;
        x[a]=i;
    }

    ///

    for(i=0;i<c.size();i+=10)
    {
        d=c.substr(i,10);
        cout<<x[d];
    }
    */
    cout<<endl;
    return 0;
}
