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
        ll n,m=0,i,j=0,k,l=0,o,d=1;

        cin>>n;

        if(n<10)
        {
            cout<<n<<endl;
        }
        else
        {

            for(i=1;i<=9;i++)
            {
                k=d*i;

                if(k<=n) m++;
                else break;

                if(i==9)
                {
                    i=0;
                    d=d*10+1;
                }
            }

            cout<<m<<endl;

        }

    }

    return 0;
}

