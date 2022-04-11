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
    for(i=0;i<2*n-1;i++)
    {
        for(c=0;c<=i && c<n;c++)
        {
            r=i-c;
            if(r>=0 && r<n)
            {
                printf("%d ",a[r][c]);
            }
        }
    }
    printf("\n");
    return 0;
}
