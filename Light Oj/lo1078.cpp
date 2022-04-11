#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t,a,c,d,e,f,i,j,k,rem;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        d=0;
        cin>>a>>c;
        rem=c%a;
        while(rem!=0)
        {
            rem=rem*10+c;
            rem=rem%a;
            d++;
        }
        printf("Case %lld: %lld\n",i,d+1);
    }
    return 0;
}
