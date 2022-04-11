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

        ll a,b,d,e,f,i,j,k=-1,l=-1,v;

        string c;
        cin>>a>>b;
        cin>>c;

        for(i=0; i<c.size(); i++)
        {
            if(c[i]=='1')
            {
                k=i;
                break;
            }
        }

        for(i=c.size()-1; i>=0; i--)
        {
            if(c[i]=='1')
            {
                l=i;
                break;
            }
        }
        if(k==-1&&l==-1)
        {
            cout<<0<<endl;
            continue;
        }
        e=0;
        f=0;
        d=a;
        for(i=k; i<=l; i++)
        {
            if(c[i]=='0')
            {
                e++;
            }
            else if(c[i]=='1' && e!=0)
            {
                d+=min(a,e*b);
                e=0;
            }
        }
        cout<<d<<endl;
    }


    return 0;
}
