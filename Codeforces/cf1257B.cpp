#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d,e,i,j,k,l;
    scanf("%d",&a);
    for(i=0;i<a;i++)
    {
        scanf("%d %d",&b,&c);
        if(b>3) printf("YES\n");
        else if(b==1)
        {
            if(c==1) printf("YES\n");
            else printf("NO\n");
        }
        else
        {
            if(c<=3) printf("YES\n");
            else printf("NO\n");
        }
    }
    return 0;
}
