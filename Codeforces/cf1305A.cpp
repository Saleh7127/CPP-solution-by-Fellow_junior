#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[10000],b[10000],c,d,e,f,i,j,k,l;
    cin>>c;
    while(c--)
    {
        cin>>d;
        for(i=0;i<d;i++)
        {
            cin>>a[i];
        }
        for(i=0;i<d;i++)
        {
            cin>>b[i];
        }
        sort(a,a+d);
        sort(b,b+d);
        for(j=0;j<d;j++)
        {
            cout<<a[j]<<" ";
        }
        cout<<"\n";
        for(j=0;j<d;j++)
        {
            cout<<b[j]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}
