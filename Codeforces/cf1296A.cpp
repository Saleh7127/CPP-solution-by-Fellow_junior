#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d,e,f,i,j,s,k,l;
    scanf("%d",&b);
    for(i=0; i<b; i++)
    {
        scanf("%d",&c);
        d=0;
        e=0;
        s=0;
        for(j=0; j<c; j++)
        {
            scanf("%d",&a);
            if(a%2==0)
                e++;
            else
            {
                d++;
                s+=a;
            }
        }
        if(d%2!=0 || (e>0 && d>0))
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}
