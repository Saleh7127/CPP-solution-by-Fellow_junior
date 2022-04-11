#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a[100000],c,d,e=0,f=0,i,j,k,l;
    cin>>c>>d;
    for(i=0; i<c; i++)
    {
        cin>>a[i];
    }
    for(i=1; i<c; i++)
    {
        l=d-a[i]-a[i-1];
        f=max(0,l);
        e+=f;
        a[i]+=f;
    }
    printf("%d\n",e);
    for(j=0; j<c; j++)
    {
        printf("%d ",a[j]);
    }
    return 0;
}
