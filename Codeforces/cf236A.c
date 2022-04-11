#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i,c=1;
    char s[1000];
    scanf("%s",&s);
    int l = strlen(s);
    sort(s,s+l);
    for(i=0; i<l-1; i++)
    {
        if(s[i]!=s[i+1])
            c++;
    }
    if(c%2==1)
        printf("IGNORE HIM!\n");
    else
        printf("CHAT WITH HER!\n");
    return 0;
}
