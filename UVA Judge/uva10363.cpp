#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,x,o,xwin,owin,i,j,k,l=0;;
    cin>>t;
    char space[1000];
    while(t--)
    {
        xwin=0;
        owin=0;
        x=0;
        o=0;
        if(l) scanf("%[^\n]%*c",space);
        char a[10][10];
        for(i=0;i<3;i++)
        {
            for(j=0;j<3;j++)
            {
               cin>>a[i][j];
               if(a[i][j]=='O') o++;
               if(a[i][j]=='X') x++;
            }
        }
        for(i=0;i<3;i++)
        {
            if(a[0][i]=='X' && a[1][i]=='X' && a[2][i]=='X') xwin++;
            if(a[0][i]=='O' && a[1][i]=='O' && a[2][i]=='O') owin++;
        }
        for(j=0;j<3;j++)
        {
            if(a[j][0]=='X' && a[j][1]=='X' && a[j][2]=='X') xwin++;
            if(a[j][0]=='O' && a[j][1]=='O' && a[j][2]=='O') owin++;
        }
        if(a[0][0]=='X' && a[1][1]=='X' && a[2][2]=='X') xwin++;
        if(a[0][0]=='O' && a[1][1]=='O' && a[2][2]=='O') owin++;
        if(a[0][2]=='X' && a[1][1]=='X' && a[2][0]=='X') xwin++;
        if(a[0][2]=='O' && a[1][1]=='O' && a[2][0]=='O') owin++;

        if(xwin && owin) printf("no\n");
        else if(o>x) printf("no\n");
        else if(x>o+1) printf("no\n");
        else if(xwin && x<=o) printf("no\n");
        else if(owin && x>o) printf("no\n");
        else printf("yes\n");
        l++;
    }
    return 0;
}
