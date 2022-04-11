#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[100000],b,c=0,d=1000000,e,f,i,j,k,l;
    cin>>b;
    for(i=0;i<b;i++)
    {
        cin>>a[i];
    }
    for(i=1;i<b;i++)
    {
        if(a[i]-a[i-1]>c)
        {
            c=a[i]-a[i-1];
        }
    }
    for(i=2;i<b;i++)
    {
        if(a[i]-a[i-2]<d)
        {
            d=a[i]-a[i-2];
        }
    }
    cout<<max(c,d)<<endl;
    return 0;
}
