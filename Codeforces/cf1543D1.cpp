#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
int main()
{

    int t=1;
    cin>>t;
    for(int cs=1; cs<=t; cs++)
    {
        int n,k;

        cin>>n>>k;

        for(int i=0; i<n; i++)
        {
            if(!i) cout<<0<<endl;
            else cout<<(i^(i-1))<<endl;

            int m;
            cin>>m;
            if(m==1) break;
        }
    }
    return 0;
}
