#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ll a[50];
    ll dp[1020];
    ll n,i,j,k,l,c=0;
    while(cin>>n)
    {
        for(i=00; i<n; i++)
        {
            cin>>a[i];
        }
        memset(dp,0,sizeof(dp));
        dp[0]=1;

        for(i=0; i<n; i++)
        {
            for(j=1000; j>=0; j--)
            {
                if(dp[j] && j+a[i]<=1000)
                {
                    dp[j+a[i]]++;
                }
            }
        }
        l=1;

        for(i=1; i<n; i++)
        {
            if(a[i]<a[i-1])
            {
                l=0;
                break;
            }
        }

        for(i=0; i<n; i++)
        {
            if(dp[a[i]]>1)
            {
                l=0;
                break;
            }
        }

        printf("Case #%lld:", ++c);

        for (i = 0; i < n; i++ )
        {
            printf (" %lld", a [i]);
        }
        if(l) printf ("\nThis is an A-sequence.\n");
        else printf ("\nThis is not an A-sequence.\n");
    }


    return 0;
}
