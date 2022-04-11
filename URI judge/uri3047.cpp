#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d,i,j,k;
    scanf("%d %d %d",&a,&b,&c);
    d= a- (b+c);
    if(d>=b && d>=c)
        printf("%d\n",d);
    else if(c>=b && c>=d)
        printf("%d\n",c);
    else if(b>=d && b>=c)
        printf("%d\n",b);

    return 0;
}
