#include <bits/stdc++.h>
using namespace std;
#define test int t; cin>>t; while (t--)
#define ll long long int
#define sc(a) scanf("%lld",&a)
#define sc2(a,b) scanf("%lld %lld",&a,&b)
void solution()
{
    ll a,n,c,i;
    cin>>n;
    ll Xor=0,total=0;
    for(i=0;i<n;i++)
    {
        cin>>a;
        total+=a;
        Xor=Xor^a;
    }
    c=total+Xor;
    printf("2\n%lld %lld\n",Xor,c);
}
int main()
{
   test
   {
      solution();
   }
   return 0;
}

