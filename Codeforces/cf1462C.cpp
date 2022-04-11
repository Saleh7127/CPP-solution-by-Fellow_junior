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
        cin>>a;
        if(a<=9) cout<<a<<endl;

        else
        {
            if(a<=17)
            {
                b=a-10;
                cout<<19+(b*10)<<endl;
            }
            else if(a<=24)
            {
                b=a-18;
                cout<<189+(b*100)<<endl;
            }
            else if(a<=30)
            {
                b=a-25;
                cout<<1789+(b*1000)<<endl;
            }
            else if(a<=35)
            {
                b=a-31;
                cout<<16789+(b*10000)<<endl;
            }
            else if(a<=39)
            {
                b=a-36;
                cout<<156789+(b*100000)<<endl;
            }
            else if(a==40) cout<<1456789<<endl;
            else if(a==41) cout<<2456789<<endl;
            else if(a==42) cout<<3456789<<endl;

            else if(a==43) cout<<13456789<<endl;
            else if(a==44) cout<<23456789<<endl;
            else if(a==45) cout<<123456789<<endl;
            else cout<<-1<<endl;
        }
    }

    return 0;
}
