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

        ll n,k,i,j=0,l;
        cin>>n>>k;
        for(i=1;i<=n;i++)
        {
           if(i<=3) cout<<i<<" ";
           else if(i>=4 && i%2==0) cout<<-i<< " ";
           else cout<<i<< " ";
        }

        cout<<endl;
    }

    return 0;
}
