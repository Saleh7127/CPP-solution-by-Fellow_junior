#include<bits/stdc++.h>
using namespace std;
int main()
{
    int b,c=0,d=0,e,f,i,j,k,l;
    cin>>b;
    int a[b];
    for(i=0;i<b;i++)
    {
        cin>>a[i];
    }
    sort(a,a+b);
    for(i=0;i<b-1;i++)
    {
        c+=a[i+1]-a[i]-1;

    }
    cout<<c<<endl;
    return 0;
}
