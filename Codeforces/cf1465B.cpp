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
        ll a[100],b,c,d,e,f,i,j,k,l;
        cin>>b;
        while(1)
        {
            c=b;
            d=0;
            while(c)
            {
                e=c%10;
                if(e!=0)
                {
                    if(b%e!=0)
                    {
                        d=1;
                        break;
                    }
                }
                c/=10;
            }

            if(d==0)
            {
                cout<<b<<endl;
                break;
            }
            else b++;
        }

    }


    return 0;
}
