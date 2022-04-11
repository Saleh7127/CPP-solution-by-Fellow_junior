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
        map<ll,ll>x;

        ll n,m,i,j,k,l=0,num;

        cin>>n>>k;

        while(1)
        {
            string a=to_string(k);

            num=0;

            for(i=0; i<n && i<a.size(); i++)
            {
                num=num*10+(a[i]-'0');
            }

            l=max(l,num);

            if(x[num]) break;

            x[num]=1;

            k=num*num;
        }
        cout<<l<<endl;
    }


    return 0;
}
