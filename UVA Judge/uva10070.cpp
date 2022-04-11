#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string a;
    ll xx=0;
    ll r4,r100,r400,r55,r15,l,f;
    while(cin>>a)
    {
        if(xx!=0) printf("\n");

        xx=1;

        r4=0,r100=0,r400=0,r55=0,r15=0,l=0,f=0;

        for(ll i=0; i<a.size(); i++)
        {
            r4=((r4*10)+(a[i]-'0'))%4;
            r100=((r100*10)+(a[i]-'0'))%100;
            r400=((r400*10)+(a[i]-'0'))%400;
            r15=((r15*10)+(a[i]-'0'))%15;
            r55=((r55*10)+(a[i]-'0'))%55;
        }

        if((r4==0 && r100 !=0) || r400==0)
        {
            printf("This is leap year.\n");
            f=1;
            l=1;
        }
        if(r15==0)
        {
            printf("This is huluculu festival year.\n");
            f=1;
        }
        if(l==1 && r55==0)
        {
            printf("This is bulukulu festival year.\n");
            f=1;
        }
        if(f==0)
        {
            printf("This is an ordinary year.\n");
        }
    }

    return 0;
}
