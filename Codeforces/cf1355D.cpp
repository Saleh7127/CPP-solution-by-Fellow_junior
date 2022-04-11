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
    ll a,c,d,i,j,k,l;
    cin>>a>>c;
    if(c/2<a)
    {
        cout<<"NO\n";
    }
    else
    {
        printf("YES\n");
        loop(i,a-1)
        {
           printf("1 ");
        }
        printf("%lld\n",c-(a-1));
        printf("%lld\n",c/2);
    }
   return 0;
}
