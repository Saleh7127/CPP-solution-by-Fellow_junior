#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    test
    {
        ll d,i,j,k,l;

        cin>>d;
        string a,c;
        vector<ll>ans;

        cin>>a>>c;

        for(i=1; i<d; i++)
        {
            if(a[i]!=a[i-1])
            {
                ans.push_back(i);
                if(a[0]=='0') a[0]='1';
                else a[0]='0';
            }
        }

        for(i=d-1; i>=0; i--)
        {
            if(c[i]!=a[0])
            {
                ans.push_back(i+1);
                if(a[0]=='0') a[0]='1';
                else a[0]='0';
            }
        }

        cout<<ans.size();
        for(i=0; i<ans.size(); i++)
        {
            cout<<" "<<ans[i];
        }
        cout<<endl;
    }


    return 0;
}
