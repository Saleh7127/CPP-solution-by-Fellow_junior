#include<bits/stdc++.h>
using namespace std;
#define ll  long long
int main()
{
    ll ch[1000]={0},t,c,d=0,e,f,i,j,k,l;
    char a[1000];
    cin>>t;
    getchar();
    while(t--)
    {
        scanf("%[^\n]%*c",a);
        l=strlen(a);
        transform(a,a+l,a,:: toupper);
        for(i='A';i<='Z';i++)
        {
            for(j=0;j<l;j++)
            {
                if(a[j]==i)
                {
                    ch[i]++;
                }
            }
            if(ch[i]>d)
            {
                d=ch[i];
            }
        }
    }
    for(i=d;i>0;i--)
    {
        for(j='A';j<='Z';j++)
        {
            if(ch[j]==i)
            {
                printf("%c %lld\n",j,i);
            }
        }
    }
    return 0;
}

