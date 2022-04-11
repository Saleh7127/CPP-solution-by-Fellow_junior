#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a[100][100],b,c,d=0,i,j,k,l,r;
    cin>>n;
    for(i=0;i<2*n-1;i++)
    {
        for(r=0;r<=i && r<n;r++)
        {
            c=i-r;
            if(c>=0 && c<n)
            {
                a[r][c]=++d;
            }
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=n-1;j>=0;j--)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}
