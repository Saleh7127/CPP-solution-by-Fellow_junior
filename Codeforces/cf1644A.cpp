/***
 created: 2022-02-22-20.34.50
***/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int tt; cin>>tt; for(int cs=1;cs<=tt;cs++)
#define get_lost_idiot return 0
#define nl '\n'

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);



    test
    {
        ll l,n,i,j,k,m=0;

        string a;

        cin>>a;

        j=k=l=0;

        for(i=0;a[i];i++)
        {
            if(a[i]=='r') j++;
            else if(a[i]=='b') k++;
            else if(a[i]=='g') l++;

            else if(a[i]=='G' && l==0) m=1;
            else if(a[i]=='B' && k==0) m=1;
            else if(a[i]=='R' && j==0) m=1;
        }

        if(m) cout<<"NO"<<nl;
        else cout<<"YES"<<nl;
    }


    get_lost_idiot;
}

