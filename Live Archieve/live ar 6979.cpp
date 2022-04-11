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
        string a;
        ll i,j,k,l,dig,sign,need,nd,ns=0;

        cin>>a;
        for(i=0; i<a.size(); i++)
        {
            if(a[i]=='*')
            {
                ns++;
            }
        }
        if(ns==0)
        {
            cout<<0<<endl;
            continue;
        }
        nd=a.size()-ns;

        if(nd>=(ns+1))
        {
            need=0;
        }
        else need=ns+1-nd;

        ll ans=need;

        sign=dig=0;

        for(i=0; i<a.size(); i++)
        {
            if(a[i]!='*')
            {
                dig++;
            }
            else
            {
                sign++;
                if(dig<(sign+1))
                {
                    if(need>0)
                    {
                        need--;
                        dig++;
                    }
                    else
                    {
                        ans++;
                        sign--;
                        dig--;
                    }
                }
            }
        }

        cout<<ans<<endl;

    }


    return 0;
}
