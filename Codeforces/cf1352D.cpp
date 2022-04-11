#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t,n,a[100000],d,e,f,i,j,k;
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        ll sml=0,smr=0,anl=0,anr=0;
        ll l=0,r=n-1,c=0;
        while(l<=r)
        {
            if(c%2)
            {
                ll tsumr=0;
                while(l<=r && tsumr<=sml)
                {
                    tsumr+=a[r--];
                }
                anr+=tsumr;
                smr=tsumr;
            }
            else
            {
                ll tsuml=0;
                while(l<=r && tsuml<=smr)
                {
                    tsuml+=a[l++];
                }
                anl+=tsuml;
                sml=tsuml;
            }
            c++;
        }
        printf("%lld %lld %lld\n",c,anl,anr);
    }
    return 0;
}
