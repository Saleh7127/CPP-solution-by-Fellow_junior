#include <bits/stdc++.h>
using namespace std;
#define ll long long int
ll nd(ll n,ll p)
{
    ll c=0;
    ll e=p;
    while(n/p>0)
    {
        c+=(n/p);
        n=n/p;
    }
    return c;
}
int p[]= {2,3,5,7,11,13,17,19,23,29,31,37,41,43,47,53,59,61,67,71,73,79,83,89,97,101};
int main()
{
    ll n,d,a,c1,c2,e,f,i,j,k,l;
    while(cin>>n>>d)
    {
        if(n==0 && d==0) break;
        if(d<0) d=llabs(d);
        a=1;
        f=0;
        for(i=0; p[i]<100; i++)
        {
            j=p[i];
            c1=nd(n,j);
            c2=0;
            while(d%j==0)
            {
                d/=j;
                c2++;
            }
            if(c1<c2)
            {
                f=1;
                break;
            }
            a*=(c1-c2+1);
        }
        if(f==0)
        {
            if(d==1) cout<<a<<endl;
            else cout<<0<<endl;
        }
        else cout<<0<<endl;
    }
    return 0;
}
