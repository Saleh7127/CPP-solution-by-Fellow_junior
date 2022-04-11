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
        ll a,c,d=0,e,f,i,j,l;
        cin>>a;
        if(a==1) cout<<2<<endl;
        else if(a==2) cout<<"6 4"<<endl;
        else if(a==2) cout<<"6 4 10"<<endl;
        else
        {
            for(i=4*a; i>=4; i-=2)
            {

                cout<<i<<" ";
                d++;

                if(d==a) break;
            }
            cout<<endl;
        }
    }


    return 0;
}
