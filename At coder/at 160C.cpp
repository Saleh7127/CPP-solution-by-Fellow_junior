#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[200000],b,c,d=0,e,f,i,j,k,l;
    cin>>b>>c;
    for(i=0;i<c;i++)
    {
        cin>>a[i];
    }
    for(i=1;i<c;i++)
    {
        d+=abs(a[i]-a[i-1]);
    }
    cout<<d<<endl;
    return 0;
}
