#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int a[100000],b[100000],c,d,e,f,i,j,k,l;
    cin>>c;
    for(i=1;i<=c;i++)
    {
        cin>>a[i];
    }
    for(i=1;i<=c;i++)
    {
        b[a[i]]=i;
    }
    for(i=1;i<=c;i++)
    {
        cout<<b[i]<<" ";
    }
    cout<<endl;

    return 0;
}
