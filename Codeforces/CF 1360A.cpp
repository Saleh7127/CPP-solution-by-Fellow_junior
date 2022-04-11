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
    ll a,c,d,e,f,i,j,k,l;
    test
    {
        cin>>a>>c;
        if(a>c) swap(a,c);
        d=max(2*a,c);
        cout<<d*d<<endl;
    }
    return 0;
}
