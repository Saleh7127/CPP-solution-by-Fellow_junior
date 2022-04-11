#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int tt; cin>>tt; for(int cs=1;cs<=tt;cs++)
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);


    string a,b;
    set<string>x;
    ll i,j,k,l=0;

    while(cin>>a)
    {
        b.clear();
        b="";

        for(i=0; i<a.size(); i++)
        {
            char c=tolower(a[i]);

            if(c>='a' && c<='z')
            {
                b+=c;
            }
            else if(b!="")
            {
                x.insert(b);
                b.clear();
                b="";
            }
        }

        if(b!="")
        {
            x.insert(b);
        }
    }

    for(auto d:x)
    {
        cout<<d<<endl;
    }


    return 0;
}
