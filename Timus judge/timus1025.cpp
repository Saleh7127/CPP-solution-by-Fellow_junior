#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[10000],b,c=0,d,e,f,i,j,k,l;
    cin>>b;
    for(i=0;i<b;i++)
    {
        cin>>a[i];
    }
    sort(a,a+b);
    for(i=0;i<(b/2)+1;i++)
    {
        c+=(a[i]/2)+1;
    }
    cout<<c<<endl;
    return 0;
}
