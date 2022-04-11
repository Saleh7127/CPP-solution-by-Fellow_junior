#include<stdio.h>
int main()
{
    char a[1000],b;
    int i,j,k=0,l,c,d,e,f;
    scanf("%[^\n]%*c",a);
    l=strlen(a);
    for(c=0; c<l; c++)
    {
        if(a[c]>='a' && a[c]<='z')
        {
            a[c]=a[c]-32;
        }
    }
    for(i=l; i>0; i--)
    {
        if(a[i]>='A'&&a[i]<='Z')
        {
            break;
        }
        else if(a[i]>='a'&&a[i]<='z')
        {
            break;
        }
    }
    if(a[i]=='A' || a[i]=='E' || a[i]=='I' || a[i]=='O' || a[i]=='U' || a[i]=='Y')
    {
        printf("YES\n");
    }
    else if(a[i]=='a' || a[i]=='e' || a[i]=='i' || a[i]=='o' || a[i]=='u' || a[i]=='y')
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
    return 0;
}
