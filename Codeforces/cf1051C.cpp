#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int tt; cin>>tt; for(int cs=1;cs<=tt;cs++)
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);



    ll n,m,i,j,k=0,l=0;

    cin>>n;

    ll a[n+4];
    map<ll,ll>x;
    set<ll>y;

    for(i=0; i<n; i++)
    {
        cin>>a[i];
        y.insert(a[i]);
        x[a[i]]++;
    }

    for(auto d:y)
    {
        if(x[d]==1) l++;
        else if(x[d]>=3) k++;
    }

    if(l%2==0)
    {
        cout<<"YES"<<endl;
        j=0;
        for(i=0; i<n; i++)
        {
            if(x[a[i]]==1)
            {
                if(j%2==0) cout<<'A';
                else cout<<'B';
                j++;
            }
            else cout<<'A';
        }
        cout<<endl;
    }
    else if(l%2==1 && k)
    {
        cout<<"YES"<<endl;
        j=0;
        k=(l+1)/2;

        l=0;
        for(i=0; i<n; i++)
        {
            if(x[a[i]]==1)
            {
                if(j<k)
                {
                    cout<<'A';
                    j++;
                }
                else
                {
                    cout<<'B';
                }
            }
            else if(x[a[i]]>=3)
            {
                if(l==0)
                {
                    cout<<'B';
                    l=1;
                }
                else cout<<'A';
            }
            else if(x[a[i]]==2)
            {
                 cout<<'A';
            }
        }


        cout<<endl;
    }
    else cout<<"NO"<<endl;

    return 0;
}
