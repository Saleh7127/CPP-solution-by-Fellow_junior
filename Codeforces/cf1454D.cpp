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

        ll a,b,c=0,d=0,e,f,i,j,k,l;
        vector<ll>x,y;
        cin>>a;
        b=a;
        l=a;
        for(i=2; i*i<=b; i++)
        {
            if(b%i==0)
            {
                d=0;
                while(b%i==0)
                {
                    b/=i;
                    d++;
                }
                if(d>c)
                {
                    e=i;
                    c=d;
                }
            }
        }

        if(c==0 || a==b) cout<<1<<endl<<a<<endl;

        else
        {
            for(i=c; i>=1; i--)
            {
                f=pow(e,i);
                k=a/f;
                if(k%e==0)
                {
                    break;
                }
            }
            for(j=1; j<=i; j++)
            {
                x.push_back(e);
            }
            x.push_back(k);
            c=1;
            for(i=0; i<x.size(); i++)
            {
                c*=x[i];
            }

            if(c==l)
            {
                cout<<x.size()<<endl;
                for(i=0; i<x.size(); i++)
                {
                    cout<<x[i]<<" ";
                }
                cout<<endl;
            }
            else cout<<1<<endl<<l<<endl;
        }
    }


    return 0;
}
