#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int b=0,c=0,d=0,e,f,i,j,k,l,t;
    cin>>t;
    long long int a[t+5];
    for(i=1;i<=t;i++)
    {
        cin>>a[i];
        b+=a[i];
    }
    if(b%t>0)
    {
        cout<<0<<endl;
        return 0;
    }
    c=b/t;
    for(i=1;i<=t;i++)
    {
        if(a[i]==c)
        {
            d++;
        }
    }
    cout<<d<<endl;
    for(i=1;i<=t;i++)
    {
        if(a[i]==c)
        {
            cout<<i<<" ";
        }
    }
    cout<<endl;
    return 0;
}
