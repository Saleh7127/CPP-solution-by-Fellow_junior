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
        string a,b;
        cin>>a>>b;
        ll i,j,k,l=0,c,d,e,f;
        c=a.size();
        d=b.size();

        if(a==b)
        {
            cout<<a<<endl;
            continue;
        }

        for(i=0; i<min(c,d); i++)
        {
            if(a[i]!=b[i])
            {
                l=1;
                break;
            }
        }
        if(l) cout<<-1<<endl;
        else
        {
            string x="";
            l=0;
            e=(c*d)/__gcd(c,d);
            if(c>d)
            {
                f=e/c;
                for(i=0; i<f; i++)
                {
                    x+=a;
                }
            }
            else
            {
                f=e/d;
                for(i=0; i<f; i++)
                {
                    x+=b;
                }
            }
            ll n=-1;

            string cc;

            if(c<d) cc=a;
            else cc=b;

            ll m=0;
            k=0;
            for(i=0; i<(e/min(c,d)); i++)
            {
                m=k*min(c,d);
                for(j=0; j<cc.size(); j++,m++)
                {
                    if(cc[j]!=x[m])
                    {
                        l=1;
                        break;
                    }
                }
                k++;
                if(l) break;
            }
            if(l) cout<<-1<<endl;
            else cout<<x<<endl;
        }
    }

    return 0;
}
