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
        string a;

        ll n,m,i,j,k,l;

        cin>>n>>a;

        l=0;
        for(i=0; i<n; i++)
        {
            if(a[i]=='0')
            {
                l++;
            }
        }


        if(l==1 || l%2==0) cout<<"BOB"<<endl;
        else cout<<"ALICE"<<endl;


    }


    return 0;
}

