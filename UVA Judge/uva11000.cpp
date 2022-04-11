#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    long long a[200000],c[200000],d,e,f,i,j,k,l;
    while(scanf("%lld",&d)==1 && d>=0)
    {
        a[0]=0;
        a[1]=1;
        c[0]=1;
        for(i=2; i<=d+3; i++)
        {
            a[i]=a[i-1]+a[i-2];
        }
        for(i=1; i<=d+3; i++)
        {
            c[i]=c[i-1]+a[i+1];
        }
        cout<<c[d]-a[d+1]<<" "<<c[d]<<endl;
    }
    return 0;
}
