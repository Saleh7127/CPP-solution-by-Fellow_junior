#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[10000],b,c,d,e,f,i,j,k,l,t;
    cin>>t;
    while(t--)
    {
        d=0;
        cin>>b>>c;
        for(i=0;i<b;i++)
        {
            cin>>a[i];
            d+=a[i];
        }
        if(d<c)
        {
            cout<<d<<endl;
        }
        else if(d>=c)
        {
            cout<<c<<endl;
        }
    }
    return 0;
}
