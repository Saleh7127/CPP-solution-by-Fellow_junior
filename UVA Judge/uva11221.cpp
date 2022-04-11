#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);


    int t;
    string a;
    cin>>t;

    getline(cin,a);

    for(int cs=1; cs<=t; cs++)
    {
        string b="",c;

        getline(cin,a);

        for(ll i=0; i<a.size(); i++)
        {
            if(a[i]>='a' && a[i]<='z')
            {
                b+=a[i];
            }
        }
        c=b;
        reverse(c.begin(),c.end());

        cout<<"Case #"<<cs<<":\n";

        if(c!=b)
        {
            cout<<"No magic :("<<endl;
        }
        else
        {
            ll l=b.size();
            ll x=sqrt(l);

            if((x*x)==l)
            {
                cout<<x<<endl;
            }
            else
            {
                cout<<"No magic :("<<endl;
            }
        }
    }


    return 0;
}
