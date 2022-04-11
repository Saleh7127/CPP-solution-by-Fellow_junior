#include <bits/stdc++.h>
using namespace std;
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
char a[200005],s[200005];
int main()
{
    ///ios_base::sync_with_stdio(0);
    ///cin.tie(0);cout.tie(0);

    test

    {
        int b,c,d,e,f,i,j,k=0,l;
        scanf("%s",a);

        l=strlen(a);

        for(i=0; i<(l+1)/2; i++)
        {
            s[i]=s[l-i-1]=a[i];
        }
        s[l]='\0';

        for(i=0; i<l; i++)
        {
            if(s[i]>a[i])
            {
                k=1;
                break;
            }
            else if(s[i]<a[i])
            {
                break;
            }
        }

        printf("Case %d: ",cs);

        if(k)
        {
            printf("%s\n",s);
        }

        else
        {
            for(i=((l+1)/2)-1; i>=0; i--)
            {
                if(s[i]<'9')
                {
                    s[i]++;
                    break;
                }
                else s[i]='0';
            }
            if(s[0]=='0')
            {
                printf("1");
                for(i=1; i<l; i++)
                {
                    printf("0");
                }
                printf("1\n");
            }
            else
            {
                for(i=0; i<(l+1)/2; i++)
                {
                    s[l-i-1]=s[i];
                }
                printf("%s\n",s);
            }
        }
    }
    return 0;
}
