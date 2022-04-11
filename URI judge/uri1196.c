#include<stdio.h>
#include<string.h>
int main()
{
    int i,j;
    char st[]="`1234567890-=QWERTYUIOP[]\\ASDFGHJKL;'ZXCVBNM,./";
    char s1[1000];
    while(scanf("%[^\n]%*c",s1)!=EOF)
    {
        for(i=0; s1[i]!='\0'; i++)
        {
            for(j=1; st[j]!='\0'; j++)
            {

                if(s1[i]==st[j])
                    s1[i]=st[j-1];

            }

        }
        printf("%s\n",s1);

    }
    return 0;

}
