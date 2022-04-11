#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[10000],b,c=1,d[10000],e[1000],f=1,g=1,m=1,n=1,i,j,k,l;
    cin>>b;
    for(i=0;i<b;i++)
    {
        cin>>a[i];
    }
    for(i=1;i<b;i++)
    {
        if(a[i]>=a[i-1])
            c++;
    }
    if(c==b)
    {
        cout<<b<<endl;
        return 0;
    }
    for(j=0;j<b/2;j++)
    {
        d[j]=a[j];
    }
    for(j=b/2;j<b;j++)
    {
        e[j]=a[j];
    }
    for(k=1;k<b/2;k++)
    {
        if(d[k]>=d[k-1])
            f++;
        else
        {
            m=max(m,f);
            f=1;
        }
    }
    for(l=(b/2)+1;l<b;l++)
    {
        if(e[l]>=e[l-1])
            g++;
        else
        {
            n=max(n,g);
            g=1;
        }
    }
    cout<<max(m,n)<<endl;
    return 0;
}
