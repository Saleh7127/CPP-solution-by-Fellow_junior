#include <bits/stdc++.h>
using namespace std;
#define test int t; cin>>t; while (t--)
#define ll long long int
#define fellow_junior  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
    fellow_junior

    ll d=0,e,f,i,j,k,l;
    string a,c;
    test
    {
        d=0;
        cin>>a>>c;
        sort(a.begin(),a.end());
        sort(c.begin(),c.end());
        for(i=0; i<c.size(); i++)
        {
            for(j=0; j<c.size(); j++)
            {
                if(a[i]==c[j])
                {
                    d=1;
                    break;
                }
            }
        }
        if(d) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }

    return 0;
}
