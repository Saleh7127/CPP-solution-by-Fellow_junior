#include <bits/stdc++.h>
using namespace std;
#define test int t; cin>>t; while (t--)
#define ll long long int
#define Faster  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
    Faster
    test
    {
        ll n,a[10000],c,d,e=0,f,i,j,k,l;
        cin>>n;
        c=n*2;
        for(i=1; i<=c; i++)
        {
            cin>>a[i];
        }
        for(i=1; i<=c; i++)
        {
            if(a[i]!=0)
            {
                for(j=i+1; j<=c; j++)
                {
                    d=a[i]+a[j];
                    if(d%2==0 && a[j]!=0)
                    {
                        if(e==n-1) break;
                        e++;
                        printf("%lld %lld\n",i,j);
                        a[j]=0;
                        a[i]=0;
                        break;
                    }
                }
            }
        }
    }
    printf("\n");

    return 0;
}
