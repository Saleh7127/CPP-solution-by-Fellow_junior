#include <bits/stdc++.h>
using namespace std;
#define test int t; cin>>t; while (t--)
#define ll long long int
#define sc(a) scanf("%lld",&a)
#define sc2(a,b) scanf("%lld %lld",&a,&b)
int main()
{
    ll a,c,d,e,f,i,j,k,l;
    while(scanf("%lld %lld",&a,&c)==2)
    {
        f=a;
        e=c;
        while(1)
        {
            i=a/e;
            j=a%e;
            f+=i;
            a=i+j;
            if(i+j<e) break;
        }
        cout<<f<<endl;
    }
    return 0;
}
/* another process ;
ans=a+(a-1)/(c-1);
*/

