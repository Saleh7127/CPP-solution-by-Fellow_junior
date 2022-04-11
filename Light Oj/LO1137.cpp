#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int tt; cin>>tt; for(int cs=1;cs<=tt;cs++)
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    test
    {

        double L,n,C,s,L1;

        cin>>L>>n>>C;

        L1 = (1 + n * C) * L;

        double lo=0.0,hi=L/2.00,mid,r,theta;

        while(hi-lo>(1e-9))
        {
            mid=(lo+hi)/2;

            r=(mid/2.00)+(L*L)/(8.00*mid);

            ///https://www.mathopenref.com/arcradiusderive.html

            theta= 2.0*asin((L/2.00)/r);

            ///sin(x)=a/r;
            ///x=sin^-1(a/r);

            s=r*theta;

            if(s>=L1)
            {
                hi=mid;
            }
            else lo=mid;

        }

        cout<<"Case "<<cs<<": "<<fixed<<setprecision(10)<<lo<<endl;

    }


    return 0;
}
