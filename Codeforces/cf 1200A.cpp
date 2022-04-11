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
    string a,c="0000000000";
    ll d,e,f,i,j,k,l;
    cin>>d;
    cin>>a;
    l=c.size();
    for(i=0; i<d; i++)
    {
        if(a[i]>='0' && a[i]<='9')
        {
            e=a[i]-'0';
            c[e]='0';
        }
        if(a[i]=='L')
        {
            for(j=0; j<l; j++)
            {
                if(c[j]=='0')
                {
                    c[j]='1';
                    break;
                }
            }
        }
        if(a[i]=='R')
        {
            for(k=l-1; k>=0; k--)
            {
                if(c[k]=='0')
                {
                    c[k]='1';
                    break;
                }
            }
        }
    }
    cout<<c<<endl;
    return 0;
}
