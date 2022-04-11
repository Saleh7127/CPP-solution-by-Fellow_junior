#include<stdio.h>
#include<string.h>
int main()
{
    int i,j;
    char a[1000],d[]="hello";
    scanf("%s",&a);
    for(i=0,j=0; a[i]!='\0'&& j<5; i++)
    {
      if(a[i]==d[j])
      {
          j++;
      }
    }
    if(j==5) printf("YES\n");
    else printf("NO\n");

    return 0;
}
