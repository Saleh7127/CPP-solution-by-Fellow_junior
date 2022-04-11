#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);


    ll a,c,d,e,f,i,j,k,l;
    char n[200];
    while(scanf("%lld %lld %s",&a,&c,n)==3)
    {
        f=0;
        ll dec=0;
        ll power=1;
        for(i=0; n[i]; i++)
        {
            dec*=a;
            if(n[i]>='0' && n[i]<='9')
            {
                if((n[i]-'0')>=a) f=1;
                else dec+=(n[i]-'0');
            }
            else
            {
                if((n[i]-'A'+10)>=a) f=1;
                else dec+=(n[i]-'A'+10);
            }
        }
        if(f)
        {
            printf("%s is an illegal base %lld number\n",n,a);
        }
        else
        {
            ll num[50]= {} ;
            j=0;
            while(dec)
            {
                num[j]=(dec%c);
                dec/=c;
                j++;

            }
            j-=1;
            printf("%s base %lld = ",n,a);
            while(j>=0)
            {
                printf("%c", num[j] <= 9 ? num[j]+'0' : num[j]-10+'A');
                j--;
            }
            printf(" base %lld\n",c);
        }

    }


    return 0;
}
