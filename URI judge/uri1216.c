#include <stdio.h>

int main()
{
    char ch[101];
    double a,b,i = 0.0;
    while(gets(ch))
    {
        scanf("%lf", &a);
        b += a;
        i += 1.0;
    }
    printf("%.1lf\n", b/i);
    return 0;
}
