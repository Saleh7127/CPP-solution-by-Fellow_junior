#include<bits/stdc++.h>
using namespace std;
int a[1000],b[1000];
int main()
{
    int t,c,i,j,d=0;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%d",&b[i]);
        if(a[b[i]]==0)
        d++;
        a[b[i]]=i;
    }
    cout<<d<<endl;
    for(j=1;j<=t;j++)
    {
        if(a[b[j]]==j) printf("%d ",b[j]);
    }
    return 0;
}
