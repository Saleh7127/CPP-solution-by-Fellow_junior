#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[100][100],b,c=0,d,e,f,i,j,k,l;
    cin>>b;
    for(i=0;i<b;i++)
    {
        for(j=0;j<b;j++)
        {
            a[i][j]=a[i-1][j]+a[i][j-1];
            if(i==0 || j==0)
            {
                a[i][j]=1;
            }
        }
    }
    c=a[b-1][b-1];
    cout<<c<<endl;
    return 0;
}
