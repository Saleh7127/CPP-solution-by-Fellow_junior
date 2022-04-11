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
        ll n,x,p,k,a[100000],c,d=0,e,f,i,j=0,s=1000000,l=0,ans=0;

        cin>>n>>x>>p>>k;

        for(i=1; i<=n; i++)
        {
            cin>>a[i];
            if(a[i]==x) d=1;
        }
        if(d==0)
        {
            sort(a+1,a+n+1);
            a[k]=x;
            l=1;
        }
        sort(a+1,a+n+1);
        if(a[p]==x)
        {
            cout<<l<<endl;
        }
        else if(a[k]==x)
        {
            cout<<-1<<endl;
        }
        else
        {
            for(i=1; i<=n; i++)
            {
                if(a[i]==x)
                {
                    j=max(j,i);
                    s=min(s,i);
                }
            }
            if(p<j)
            {
                if(k<=p)
                {
                    ans=min(abs(p-j)+l,abs(p-s)+l);
                    cout<<ans<<endl;
                }
                else cout<<-1<<endl;
            }
            else
            {
                if(k>=p)
                {
                    ans=min(abs(p-j)+l,abs(p-s)+l);
                    cout<<ans<<endl;
                }
                else cout<<-1<<endl;
            }
        }
    }
    return 0;
}
///1 2 3 4 5 6 7 8 9 10

