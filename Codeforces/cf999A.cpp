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
    ll a[100000],c,d,e=0,f,i,j,k,l;
    cin>>c>>d;
    for(i=0; i<c; i++)
    {
        cin>>a[i];
    }
    for(i=0; i<c; i++)
    {
        if(a[i]>d)
        {
            break;
            f=i;
        }
        else
            e++;
    }
    if(e==c)
        cout<<e<<endl;
    else
    {
        for(j=c-1; j>f; j--)
        {
            if(a[j]>d)
                break;
            else
                e++;
        }
        cout<<e<<endl;
    }
    return 0;
}
