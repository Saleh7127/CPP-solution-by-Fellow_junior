#include<bits/stdc++.h>
using namespace std;
int main()
{
    char a[1000][1000];
    int b,c=0,d,e,f,i,j,k,l;
    cin>>b;
    for(i=0;i<b; i++)
    {
        for(j=0;j<b;j++)
        {
            cin>>a[i][j];
        }
    }
    for(i=0; i<b; i++)
    {
        for(j=0; j<b; j++)
        {
            if(a[i][j]=='X' && a[i-1][j+1]=='X' && a[i-1][j-1]=='X' && a[i+1][j-1]=='X' && a[i+1][j+1]=='X')
            {
                c++;
            }
        }
    }
    cout<<c<<endl;
}
