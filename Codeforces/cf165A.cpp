#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x[10000],y[10000],n,i,j,k,l=0,a,c,b,d;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>x[i]>>y[i];
    }
    for(i=0;i<n;i++)
    {
        a=0,b=0,c=0,d=0;
        for(j=0;j<n;j++)
        {
            if(x[i]>x[j] && y[i]==y[j]) a=1;
            if(x[i]<x[j] && y[i]==y[j]) b=1;
            if(x[i]==x[j] && y[i]>y[j]) c=1;
            if(x[i]==x[j] && y[i]<y[j]) d=1;
        }
        if(a&&b&&c&&d) l++;
    }
    cout<<l<<endl;
    return 0;
}
