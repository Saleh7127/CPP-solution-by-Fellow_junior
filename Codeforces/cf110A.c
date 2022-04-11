#include<stdio.h>
#include<string.h>
int main()
{

    int l=0;
    char a[10000];
    scanf("%s",&a);
    int len = strlen(a);
    for(int i =0 ; i < len ; i++)
    {
        if(a[i]=='7'|| a[i]=='4')

            l++;
    }
    if(l==7||l==4)   printf("YES\n");
      else   printf("NO\n");


      return 0 ;
}
