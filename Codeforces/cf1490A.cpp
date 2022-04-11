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
        ll n,m,i,j,k=0,l;
        cin>>n;
        ll a[n+5];
        for(i=0; i<n; i++)
        {
            cin>>a[i];
        }
        for(i=0; i<n-1; i++)
        {
            l=max(a[i],a[i+1])/min(a[i], a[i+1]);
            if(max(a[i],a[i+1])%min(a[i], a[i+1])!=0)
            {
                l++;
            }
            if(l>32)
            {
                k+=5;
            }
            else if(l>16)
            {
                k +=4;
            }
            else if(l>8)
            {
                k+=3;
            }
            else if(l>4)
            {
                k+=2;
            }
            else if(l>2)
            {
                k+=1;
            }
        }
        cout<<k<<endl;
    }


    return 0;
}
