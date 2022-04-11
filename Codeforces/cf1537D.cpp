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
        ll n,m;
        cin>>n;
        if(n%2==1 || n==2) cout<<"Bob"<<endl;
        else
        {
            m=0;
            while(n%2==0)
            {
                 n/=2;
                 m++;
            }
            if(m%2==0) cout<<"Alice"<<endl;
            else cout<<"Bob"<<endl;
        }
    }

    return 0;
}

