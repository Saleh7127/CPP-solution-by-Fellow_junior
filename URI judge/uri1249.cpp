#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k,l,m,n;
    char a[1000];
    while(scanf("%[^\n]%*c",a)!=EOF)
    {
        l=  strlen(a);
        for(i=0;i<l;i++)
        {
            if(a[i]>='A' && a[i]<='Z')
            {
                if(a[i]<'N')
                {
                    a[i]=a[i]+13;
                }
                else
                {
                    a[i]=a[i]-13;
                }
            }
            else if(a[i]>='a' && a[i]<='z')
            {
                if(a[i]<'n')
                {
                    a[i]=a[i]+13;
                }
                else
                {
                    a[i]=a[i]-13;
                }
            }
        }
        printf("%s\n",a);
    }
    return 0;
}
