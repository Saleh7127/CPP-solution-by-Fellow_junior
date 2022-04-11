#include<stdio.h>
#include<string.h>
int main()
{
    char s[55];
    int a,i,j=0;
    scanf("%d",&a);
    scanf("%s",&s);
    for(i=0; i<a; i++)
    {

        if(s[i]==s[i+1])
            j++;
    }
    printf("%d\n",j);
    return 0;

}
