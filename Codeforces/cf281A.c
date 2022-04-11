#include <stdio.h>
#include <string.h>
int main()
{
    int i;
    char ch[1000];
    scanf("%s",ch);
    int len = strlen(ch) ;
    for(i=0; i<len; i++)
    {
        if(ch[0]>96 && ch[0]<123 )
            ch[0] = ch[0]- 32;

    }
    printf("%s\n",ch);
    return 0;
}
