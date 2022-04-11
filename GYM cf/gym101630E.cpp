#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ll n,m,i,j=0,k=0,l=0;

    cin>>n;
    ll a[n+5];
    map<ll,ll>x;
    vector<ll>y;

    for(i=0; i<n; i++)
    {
        cin>>a[i];
        if(a[i]<0) j++;
    }


    for(i=0; i<n; i++)
    {
        if(a[i]>0)
        {
            x[a[i]]++;
        }
        else if(a[i]==0)
        {
            l++;
        }
        else
        {
            m=abs(a[i]);
            if(x[m])
            {
                x[m]--;
            }
            else if(l)
            {
                y.push_back(m);
                l--;
            }
            else
            {
                k=1;
                break;
            }
        }
    }

    if(k==1) cout<<"No"<<endl;
    else
    {
        while(l--)
        {
            y.push_back(7);
        }

        cout<<"Yes"<<endl;
        for(auto ff:y)
        {
            cout<<ff<<" ";
        }
        cout<<endl;
    }


    return 0;
}
