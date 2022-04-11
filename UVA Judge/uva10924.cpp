#include<bits/stdc++.h>
using namespace std;
int main()
{
    char a[1000];
    int b,c,d,e,f,i,j,k,l;
    while(scanf("%s",a)!=EOF)
    {
        d=0;
        e=0;
        l=strlen(a);
        for(i=0; i<l; i++)
        {
            if(a[i]>='A'&&a[i]<='Z')
            {
                c=a[i]-'A'+27;
                d+=c;
            }
            else if(a[i]>='a'&&a[i]<='z')
            {
                c=a[i]-'a'+1;
                d+=c;
            }
        }
        for(j=2;j*j<=d;j++)
        {
            if(d%j==0) e=1;
        }
        if(e) printf("It is not a prime word.\n");
        else printf("It is a prime word.\n");
    }
    return 0;
}
