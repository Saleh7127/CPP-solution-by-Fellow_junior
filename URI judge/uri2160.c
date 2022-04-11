#include<stdio.h>
int main()
{
    char a[1000];
    gets(a);
    if(strlen(a)<= 80) printf("YES\n");
    else  if(strlen(a) > 80) printf("NO\n");

    return 0;
}
