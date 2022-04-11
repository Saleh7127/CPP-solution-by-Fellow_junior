#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d,e,f,i,j,k,l;
    scanf("%d",&a);
    for(i=0; i<a; i++)
    {
        k=0;
        f=0;
        scanf("%d %d %d %d",&b,&c,&d,&e);
        if(b>=c && b>=d)
        {
            f=(b-c)+(b-d);
        }
        else if(c>=b && c>=d)
        {
            f=(c-b)+(c-d);
        }
        else if(d>=c && d>=b)
        {
            f=(d-c)+(d-b);
        }
        k=e-f;
        if(f==e)
            printf("YES\n");
        else if(f<e)
        {

            if(k%3==0)
                printf("YES\n");
            else
                printf("NO\n");
        }
        else
            printf("NO\n");
    }
    return 0;
}
