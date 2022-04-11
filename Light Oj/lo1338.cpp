#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k,l,t,m,n;
    char a[1000],b[1000];
    scanf("%d",&t);
    getchar();
    for(i=1; i<=t; i++)
    {
        gets(a);
        gets(b);
        char c[26],d[26];
        for(m=0; m<26; m++)
        {
            c[m]=0;
            d[m]=0;
        }
        for(j=0; a[j]!='\0'; j++)
        {
            if(a[j]>='A' && a[j]<='Z')
            {
                c[a[j]-65]++;
            }
            else if(a[j]>='a' && a[j]<='z')
            {
                c[a[j]-97]++;
            }
        }
        for(j=0; b[j]!='\0'; j++)
        {
            if(b[j]>='A' && b[j]<='Z')
            {
                d[b[j]-65]++;
            }
            else if(b[j]>='a' && b[j]<='z')
            {
                d[b[j]-97]++;
            }
        }
        l=0;
        for(k=0;k<26;k++)
        {
            if(c[k]!=d[k])
            {
                l=1;
                break;
            }
        }
        if(l==0) printf("Case %d: Yes\n",i);
       else if(l==1) printf("Case %d: No\n",i);
    }
    return 0;
}
