#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll a,c,d,e,f;
    cin>>a;
    if(a>=1 && a<=4) printf("few\n");
    if(a>=5 && a<=9) printf("several\n");
    if(a>=10 && a<=19) printf("pack\n");
    if(a>=20 && a<=49) printf("lots\n");
    if(a>=50 && a<=99) printf("horde\n");
    if(a>=100 && a<=249) printf("throng\n");
    if(a>=250 && a<=499) printf("swarm\n");
    if(a>=500 && a<=999) printf("zounds\n");
    if(a>=1000) printf("legion\n");
    return 0;
}
