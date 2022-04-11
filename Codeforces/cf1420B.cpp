#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
int main()
{
    test
    {
        ll n,m,k;
        cin>>n;
        ll a,b[1000]= {0};
        for(ll i=1; i<=n; i++)
        {
            cin>>a;
            if(a==1)
            {
                b[0]++;
            }
            if(a>=2 and a<=3)
            {
                b[1]++;
            }
            if(a>=4 and a<=7)
            {
                b[2]++;
            }
            if(a>=8 and a<=15)
            {
                b[3]++;
            }
            if(a>=16 and a<=31)
            {
                b[4]++;
            }
            if(a>=32 and a<=63)
            {
                b[5]++;
            }
            if(a>=64 and a<=127)
            {
                b[6]++;
            }
            if(a>=128 and a<=255)
            {
                b[7]++;
            }
            if(a>=256 and a<=511)
            {
                b[8]++;
            }
            if(a>=512 and a<=1023)
            {
                b[9]++;
            }
            if(a>=1024 and a<=2047)
            {
                b[10]++;
            }
            if(a>=2048 and a<=4095)
            {
                b[11]++;
            }
            if(a>=4096 and a<=8191)
            {
                b[12]++;
            }
            if(a>=8192 and a<=16383)
            {
                b[13]++;
            }
            if(a>=16384 and a<=32767)
            {
                b[14]++;
            }
            if(a>=32768 and a<=65535)
            {
                b[15]++;
            }
            if(a>=65536 and a<=131071)
            {
                b[16]++;
            }
            if(a>=131072 and a<=262143)
            {
                b[17]++;
            }
            if(a>=262144 and a<=524287)
            {
                b[18]++;
            }
            if(a>=524288 and a<=1048575)
            {
                b[19]++;
            }
            if(a>=1048576 and a<=2097151)
            {
                b[20]++;
            }
            if(a>=2097152 and a<=4194303)
            {
                b[21]++;
            }
            if(a>=4194304 and a<=8388607)
            {
                b[22]++;
            }
            if(a>=8388608 and a<=16777215)
            {
                b[23]++;
            }
            if(a>=16777216 and a<=33554431)
            {
                b[24]++;
            }
            if(a>=33554432 and a<=67108863)
            {
                b[25]++;
            }
            if(a>=67108864 and a<=134217727)
            {
                b[26]++;
            }
            if(a>=134217728 and a<=268435455)
            {
                b[27]++;
            }
            if(a>=268435456 and a<=536870911)
            {
                b[28]++;
            }
            if(a>=536870912 and a<=1073741824)
            {
                b[29]++;
            }
        }
        ll ans=0;
        for(ll i=0; i<=29; i++)
        {
            ll c=b[i];
            if(c>0)
            {
                ans+=(c*(c-1))/2;
            }
        }
        cout<<ans<<endl;
    }
}



