/***
 created: 2021-11-30-22.28.59
***/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define get_lost_idiot return 0
#define nl '\n'

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);


    int tt;
    cin>>tt;

    cin.ignore();
    cin.ignore();
    for(int cs=1; cs<=tt; cs++)
    {
        vector<ll>lis,a,ans;
        ll n,m,i,j,k,l;

        string x;

        while(getline(cin,x) && x!="")
        {
            a.push_back(stoi(x));
        }

        ll dp[a.size()+2]= {0};

        dp[0]=1;

        lis.push_back(a[0]);

        l=1;
        for(i=1; i<a.size(); i++)
        {
            if(a[i]>lis[lis.size()-1])
            {
                l++;
                lis.push_back(a[i]);
                dp[i]=l;
            }
            else
            {
                k=lower_bound(lis.begin(),lis.end(),a[i])-lis.begin();

                lis[k]=a[i];

                dp[i]=k+1;
            }
        }

        for(i=a.size()-1; i>=0; i--)
        {
            if(dp[i]==l)
            {
                l--;
                ans.push_back(a[i]);
            }
        }

        cout<<"Max hits: "<<ans.size()<<nl;

        for(i=ans.size()-1; i>=0; i--)
        {
            cout<<ans[i]<<nl;
        }

        if(cs!=tt) cout<<nl;

    }

    get_lost_idiot;
}
