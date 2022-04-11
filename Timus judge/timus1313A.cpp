#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[100][100],i,j,r,c,n;
    cin>>n;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            cin>>a[i][j];
        }
    }
    printf("%d ",a[0][0]);
    for(i=1;i<n;i++)
    {
        r=i,c=0;
        for( ;r>=0 && c<n; )
        {
            printf("%d ",a[r][c]);
            r--,c++;
        }
    }
    for(i=1;i<n;i++)
    {
        r=n-1,c=i;
        for( ;r>=0 && c<n; )
        {
            printf("%d ",a[r][c]);
            r--,c++;
        }
    }
    printf("\n");
    return 0;
}
