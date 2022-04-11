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
        ll a,b,c,d,e,f,i,j,k,l;
        cin>>a>>b;
        if(a==b)
        {
            d=1;
            for(i=0; i<b; i++)
            {
                cout<<d<<" ";
                d++;;
            }
        }
        else
        {

            e=a-b;
            f=b;
            vector<ll>x;
            for(i=1; i<b-e; i++)
            {
                x.push_back(i);
            }
            e++;
            while(e--)
            {
                x.push_back(b);
                b--;
            }
            for(i=0; i<f; i++)
            {
                cout<<x[i]<<" ";
            }
        }
        cout<<endl;
    }


    return 0;
}
