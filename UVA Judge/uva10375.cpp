#include <bits/stdc++.h>
using namespace std;
#define test int t; cin>>t; while (t--)
#define ll long long int
#define fellow_junior  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
    fellow_junior

    ll a,c,d,e,f,i,j,k,l;

    while(cin>>a>>c>>d>>e)
    {


        c=min(c,a-c);
        e=min(e,d-e);

        double ans=1.0;

        for(i=0; i<c || i<e; i++)
        {
            if(i<c)
            {
                ans=ans*(a-i);
                ans=ans/(i+1);
            }
            if(i<e)
            {
                ans=ans*(i+1);
                ans=ans/(d-i);
            }

        }
        printf("%.5lf\n",ans);
    }
    return 0;
}

/*
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ll p,q,r,s,i,j,k,l;
    while(cin>>p>>q>>r>>s)
    {
        double ans=1.00;
        q=min(q,p-q);
        s=min(s,r-s);

        for(i=1; i<=q || i<=s ; i++)
        {
            if(i<=q)
            {
                ans=ans*(p-i+1)/i;
            }
            if(i<=s)
            {
                ans=ans*i/(r-i+1);
            }
        }
        printf("%.5lf\n",ans);
    }


    return 0;
}
*/
