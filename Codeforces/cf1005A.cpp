#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[10000],b,c=1,d=0,e,f,i,j,k;
    cin>>b;
    for(i=0; i<b; i++)
    {
        cin>>a[i];
    }
    for(i=0; i<b; i++)
    {
        if(a[i]==1)
        {
            d++;
        }
    }
    cout<<d<<endl;
    for(i=0; i<b-1; i++)
    {
        if(a[i]<a[i+1])
        {
            c++;
        }
        else
        {
            cout<<c<<" ";
            c=1;
        }
    }
    cout<<a[b-1]<<endl;
    return 0;
}
