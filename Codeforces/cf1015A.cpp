#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[1000]={0},b,c,d=0,e,f,i,j,k,l,r;
    cin>>b>>c;
    for(f=1;f<=b;f++)
    {
        cin>>l>>r;
        for(i=l;i<=r;i++)
        {
            a[i]++;
        }
    }
    for(j=1;j<=c;j++)
    {
        if(a[j]==0)
        {
            d++;
        }
    }
    cout<<d<<endl;
    for(k=1;k<=c;k++)
    {
        if(a[k]==0)
        {
            cout<<k<<" ";
        }
    }
    cout<<endl;
    return 0;
}
