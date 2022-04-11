#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
vector<ll>ans;
void allcmbntn(ll ind,vector<ll>x,ll sum=0)
{
    if(ind==x.size())
    {
        ans.push_back(sum);
        return;
    }
    allcmbntn(ind+1,x,sum);
    allcmbntn(ind+1,x,sum+x[ind]);
    allcmbntn(ind+1,x,sum+(2*x[ind]));
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    test
    {
        ll n,w,c,i,k;

        cin>>n>>w;
        vector<ll>a,a1;
        for(i=1; i<=n; i++)
        {
            cin>>c;
            if(i<=(n/2))
            {
                a.push_back(c);
            }
            else
            {
                a1.push_back(c);
            }
        }

        ans.clear();
        allcmbntn(0,a);
        a=ans;

        ans.clear();
        allcmbntn(0,a1);
        a1=ans;

        sort(a1.begin(),a1.end());
        sort(a.begin(),a.end());
        k=0;

        for(i=0;i<a.size();i++)
        {
            k=binary_search(a1.begin(),a1.end(),w-a[i]);
            if(k) break;
        }

        if(k) cout<<"Case "<<cs<<": Yes"<<endl;
        else cout<<"Case "<<cs<<": No"<<endl;
    }

    return 0;
}
