#include<bits/stdc++.h>
using namespace std;
int main()
{
    char a[1000];
    int i,j,k;
    while(scanf("%[^\n]%*c",a)!=EOF)
    {

        for(i=0;a[i]!='\0';i++)
        {
            if(a[i]=='@')
            {
                a[i]='a';
            }
            if(a[i]=='&')
            {
                a[i]='e';
            }
            if(a[i]=='!')
            {
                a[i]='i';
            }
            if(a[i]=='*')
            {
                a[i]='o';
            }
            if(a[i]=='#')
            {
                a[i]='u';
            }
        }
        printf("%s\n",a);
    }
    return 10;
}
