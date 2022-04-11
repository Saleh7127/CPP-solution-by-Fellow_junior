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
        ll n,m,i,j,k,l;


        cin>>n;
        l=0;

        for(i=0; i<30; i++)
        {
            if(n & (1<<i))
            {
                l=i;
            }
        }
        m=pow(2,l);
        cout<<m-1<<endl;

    }


    return 0;
}
