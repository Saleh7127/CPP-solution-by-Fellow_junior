#include <bits/stdc++.h>
using namespace std;
#define test int t; cin>>t; while (t--)
#define ll long long int
#define sc(a) scanf("%lld",&a)
#define sc2(a,b) scanf("%lld %lld",&a,&b)
#define pf(a) printf("%lld",a)
#define loop1(i,a,c) for(i=a;i<=c;i++)
#define loop(i,c) for(i=0;i<c;i++)
int main()
{
    ll a,n,c,d,e,f,i,j,l,k;
    test
    {
        cin>>n>>k;
        for(i=0;i<k-1;i++)
        {
            d=0;
            e=9;
            a=n;
            while(a>0)
            {
                c=a%10;
                if(c>d) d=c;
                if(c<e) e=c;
                a=a/10;
            }
            if(d*e==0) break;
            n=n+(d*e);
        }
        cout<<n<<endl;
    }
   return 0;
}
