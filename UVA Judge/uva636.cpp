#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ll a,b,c,d,e,f,i,j,k,l;

    while(cin>>a && a)
    {
        for(i=2; i<101; i++)
        {
            c=1;
            d=a;
            e=0;
            f=0;
            while(d)
            {
                e=e+(d%10)*c;
                if((d%10)>=i)
                {
                    f=1;
                    break;
                }
                c*=i;
                d/=10;
            }
            if(f==1)
            {
                continue;
            }
            if(ceil(sqrt(e))*ceil(sqrt(e))==e)
            {
                cout<<i<<endl;
                break;
            }
        }

    }


    return 0;
}


/*
#include <stdio.h>
#include <string.h>
#include <math.h>

int main() {
    char s[20];
    while(scanf("%s", s) == 1) {
        if(!strcmp(s, "0"))
            break;
        int len = strlen(s);
        int i, base = 2;
        for(i = 0; i < len; i++) {
            s[i] -= '0';
            if(s[i] > base)
                base = s[i];
        }

        for(base++ ; ; base++) {
            long long a = 1, tmp = 0;
            for(i = len-1; i >= 0; i--)
                tmp += s[i]*a, a *= (long long)base;
            a = (long long)sqrt(tmp);
            if(a*a == tmp) {
                printf("%d\n", base);
                break;
            }
        }
    }
    return 0;
}
*/

