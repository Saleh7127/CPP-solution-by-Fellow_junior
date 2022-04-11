#include<bits/stdc++.h>
using namespace std;
int main()
{
    char a[1000][1000];
    int i,j,k,l;
    for (i=1; i<=3; i++)
    {
        for(j=1; j<=3; j++)
        {
            cin>>a[i][j];
        }
    }
    for (i=1; i<=3; i++)
    {
        for (j=1; j<=3; j++)
        {
            if (a[1][1]==a[3][3] && a[1][2]==a[3][2] && a[1][3]==a[3][1] && a[2][1]==a[2][3])
            {
                cout<<"YES\n";
                return 0;
            }
            else
            {
                cout<<"NO\n";
                return 0;
            }
        }
    }
    return 0;
}
