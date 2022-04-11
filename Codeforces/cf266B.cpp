#include<bits/stdc++.h>
using namespace std;
int main()
{
    int b,c,d,e,f,i,j,k,l,m,n;
    char a[1000];
    scanf("%d %d %s",&c,&b,a);
    for(l=0;l<b;l++)
    {
        for(i=0;i<c;i++)
        {
            if(a[i]=='B' && a[i+1]=='G')
            {
                swap(a[i],a[i+1]);
                i++;
            }
        }
    }
    printf("%s\n",a);

    return 0;
}
