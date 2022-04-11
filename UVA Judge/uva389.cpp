#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
int main()
{
    ll a,c,d,e,f,i,j,k,l;
    char n[200];
    while(scanf("%s %lld %lld",n,&a,&c)==3)
    {
        f=strlen(n);
        ll dec=0;
        ll power=1;
        for(i=f-1; i>=0; i--)
        {
            if(n[i] <= '9') dec += (n[i]-'0')*power;
            else dec += (n[i]-'A'+10)*power;

            power*=a;
        }

        ll num[50]= {} ;
        j=-1;
        while(dec>0)
        {
            num[++j]=(dec%c);
            dec/=c;

        }
        if(j>= 7)
        {
            cout<<"  ERROR"<<endl;
            continue;
        }
        if(j< 0) j= 0;
        for(i = 6; i > j; i--)
        {
            printf(" ");
        }

        for(i = j; i >= 0; i--)
        {
            printf("%c", num[i] < 10 ? num[i]+'0' : num[i]+'A'-10);
        }
        printf("\n");
    }
    return 0;
}
