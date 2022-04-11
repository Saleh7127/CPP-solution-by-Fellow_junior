#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[10][10]= {0},b,c,d,e,i,j,k,l;
    for(i=1; i<4; i++)
    {
        for(j=1; j<4; j++)
        {
            cin>>a[i][j];
        }
    }
    for(i=1; i<4; i++)
    {
        for(j=1; j<4; j++)
        {
            b=a[i][j]+a[i][j-1]+a[i-1][j]+a[i][j+1]+a[i+1][j]+1;
            printf("%d",b%2);
        }
        printf("\n");
    }
    return 0;
}
