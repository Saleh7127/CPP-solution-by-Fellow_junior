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


        ll n,m,i,j,k,l,w;

        cin>>n>>w;

        vector<ll>a(n),ans;

        for(i=0; i<n; i++)
        {
            cin>>a[i];
        }
        sort(a.rbegin(),a.rend());

        ans.push_back(w);

        for(i=0; i<n; i++)
        {
            k=lower_bound(ans.begin(),ans.end(),a[i])-ans.begin();

            if(k<ans.size())
            {
                ans[k]-=a[i];
            }
            else ans.push_back(w-a[i]);
        }
        cout<<ans.size()<<endl;
    }

    return 0;
}
