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


        map<ll,ll>x;

        ll n,m,i,j,k,l;

        cin>>n;

        for(i=0; i<n; i++)
        {
            cin>>k;
            x[k]++;
        }

        vector<ll>a;


        for(auto i:x)
        {
            a.push_back(i.second);
        }


        sort(a.rbegin(),a.rend());
//        reverse(a.begin(),a.end());
        l=j=a[0];

        for(i=1; i<a.size(); i++)
        {
            if(a[i]<j)
            {
                l+=a[i];
                j=a[i];
            }
            else if(j>0)
            {
                l+=(--j);
            }
        }
        cout<<l<<endl;
    }


    return 0;
}
