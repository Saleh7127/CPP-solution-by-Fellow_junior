#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define fellow_junior  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
    ll t,o;
    cin>>t;
    getchar();
    for(o=1;o<=t;o++)
    {
        string a,c,d,e;
        getline(cin, a);
        getline(cin, c);

        if(a==c)
        {
            cout<<"Case "<<o<<": "<<"Yes"<<endl;
            continue;
        }
        for(ll i=0; i<a.size(); i++)
        {
            if(a[i]==' ')
            {
                continue;
            }
            else d+=a[i];
        }
        for(ll i=0; i<c.size(); i++)
        {
            if(c[i]==' ')
            {
                continue;
            }
            else e+=c[i];
        }
        if(d==e) cout<<"Case "<<o<<": Output Format Error"<<endl;
        else cout<<"Case "<<o<<": Wrong Answer"<<endl;
    }
    return 0;
}
