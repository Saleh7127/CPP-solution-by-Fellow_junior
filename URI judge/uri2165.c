#include<stdio.h>
#include<string.h>
int main()
{
   char a[1000];
   gets(a);
   int len = strlen(a);
   if(len>140) printf("MUTE\n");
   else printf("TWEET\n");
}
