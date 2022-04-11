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
        ll n,a[100],b,c,d,e,f,i,j,k,l;
        cin>>n;
        for(i=0; i<n; i++)
        {
            cin>>a[i];
        }
        sort(a,a+n);

        if(n==1)
        {
            cout<<a[0]<<endl;
        }

        else if(n==2)
        {
            cout<<a[1]<<endl;
        }

        else if(n==3)
        {
            cout<<max(a[0]+a[1],a[2])<<endl;
        }

        else if(n==4)
        {
            if(a[3]>=(a[0]+a[1]+a[2])) cout<<a[3]<<endl;
            else cout<<max(a[0]+a[3],a[2]+a[1])<<endl;
        }
    }
    return 0;
}
