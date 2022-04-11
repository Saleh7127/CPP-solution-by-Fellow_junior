#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);


    ll n,a[1000],b,c=0,d=0,e=0,f,i,j,k,l;

    cin>>n;

    for(i=0; i<n; i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    for(i=0; i<n; i++)
    {
        e=0;
        for(j=0; j<i; j++)
        {
            if(a[i]%a[j]==0)
            {
                e=1;
                break;
            }
        }
        if(e==0) c++;

    }

    cout<<c<<endl;

    return 0;
}
