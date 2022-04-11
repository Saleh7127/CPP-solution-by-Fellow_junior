#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ///!@]B

    test
    {
        ll n,c,d,r=0,e=0,f,i,j,k,l;
        string a;

        cin>>n;
        cin>>a;
        if(n%2)
        {
            for(i=0; i<n; i++)
            {
                if(i%2==0 && (a[i]-'0')%2==1)
                {
                    r=1;
                }
            }
            if(r) cout<<1<<endl;
            else cout<<2<<endl;
        }
        else
        {
            for(i=0; i<n; i++)
            {
                if(i%2==1 && (a[i]-'0')%2==0)
                {
                    e=1;
                }
            }
            if(e) cout<<2<<endl;
            else cout<<1<<endl;
        }
    }
    return 0;
}
