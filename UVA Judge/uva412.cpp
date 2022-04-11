#include<bits/stdc++.h>
using namespace std;
typedef long long           ll;
typedef unsigned long long  ull;
template <typename T> T Sqr(T x) { T n = x * x ; return n ;}
template <typename T> T Pow(T B,T P){ if(P==0) return 1; if(P&1) return B*Pow(B,P-1);  else return Sqr(Pow(B,P/2));}
template <typename T> T Abs(T a) {if(a<0)return -a;else return a;}
template <typename T> T Gcd(T a,T b){if(a<0)return Gcd(-a,b);if(b<0)return Gcd(a,-b);return (b==0)?a:Gcd(b,a%b);}
template <typename T> T Lcm(T a,T b) {if(a<0)return Lcm(-a,b);if(b<0)return Lcm(a,-b);return a*(b/Gcd(a,b));}
int gcd(int a,int b)
{
    while(b)
    {
        a=a%b;
        swap(a,b);
    }
    return a;
}

int main()
{
    ll n;
    while(scanf("%lld",&n)==1 && n)
    {
        ll a[100000],c,d=0,e,f,i,j,k,l;
        double pi;
        for(i=0;i<n;i++)
        {
            scanf("%lld",&a[i]);
        }
        for(i=0;i<n-1;i++)
        {
            for(j=i+1;j<n;j++)
            {
                c=gcd(a[i],a[j]);
                if(c==1)
                {
                    d++;
                }
            }
        }
        e=(n*(n-1))/2;
        if(d==0) printf("No estimate for this data set.\n");
        else
        {
            pi=(double)sqrt((6.0000*e)/d);
            printf("%.6lf\n",pi);
        }
    }
    return 0;
}
