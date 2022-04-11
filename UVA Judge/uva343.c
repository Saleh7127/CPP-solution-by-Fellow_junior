#include <stdio.h>
#include <string.h>
#define ll long long
ll deshimal(char a[],ll base,ll len)
{
    ll ans=0,c=1,i;

    for(i=len-1; i>=0; i--)
    {
        if(a[i]>='0' && a[i]<='0')
        {
            ans+=(a[i]-'0')*c;
        }
        else ans+=(a[i]-'A'+10)*c;

        c*=base;
    }
    return ans;
}


int main()
{


    char a[1000],b[1000];

    while(scanf("%s %s", a, b) == 2)
    {

        ll l1=strlen(a);
        ll l2=strlen(b);

        ll b1=1,b2=1,i,j,k=0,l; ///b1,b2 = bases

        for(i=0; i<l1; i++)
        {
            if(a[i]>='0' && a[i]<='9')
            {
                if((a[i]-'0')>b1)
                {
                    b1=a[i]-'0';
                }
            }
            else
            {
                if((a[i]-'A'+10)>b1)
                {
                    b1=a[i]-'A'+10;
                }
            }
        }

        for(i=0; i<l2; i++)
        {
            if(b[i]>='0' && b[i]<='9')
            {
                if((b[i]-'0')>b2)
                {
                    b2=b[i]-'0';
                }
            }
            else
            {
                if((b[i]-'A'+10)>b2)
                {
                    b2=b[i]-'A'+10;
                }
            }
        }

        b1++;
        b2++;

        for(i=b1; i<=36; i++)
        {
            for(j=b2; j<=36; j++)
            {
                if(deshimal(a,i,l1)==deshimal(b,j,l2))
                {
                    printf("%s (base %d) = %s (base %d)\n",a,i,b,j);
                    k=1;
                    break;
                }
            }
            if(k) break;
        }
        if(k==0) printf("%s is not equal to %s in any base 2..36\n",a,b);

    }

    return 0;
}
