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


        ll r,b,i,j,k,l;

        cin>>r>>b>>k;



       //1 2 3 4 56 6

        if(k==0)
        {
            if(r==b) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;

            continue;
        }
        else
        {
            l=min(r,b);

            j=abs(r-b)/l;

            if(abs(r-b)%l!=0) j++;

            if(j<=k) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
    }
    return 0;
}
