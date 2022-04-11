#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t,a[100000],y[100000],c,d,e,f,i,j,k,l;
    cin>>t;
    for(c=1;c<=t;c++)
    {
        f=0;
        cin>>d>>e;
        for(i=0;i<d;i++)
        {
            cin>>a[i]>>y[i];
        }
        sort(y,y+d);
        f=y[0]+e;
        l=1;
        for(j=0;j<d;j++)
        {
            if(f<y[j])
            {
                l++;
                f=y[j]+e;
            }
        }
        printf("Case %lld: %lld\n",c,l);
    }
}
