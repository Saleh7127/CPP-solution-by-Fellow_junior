#include<bits/stdc++.h>
using namespace std;
int main ()
{
    long long int a[200000],b,c,d=0,e,f,i,j,k,l;
    cin>>c;
    for(i=0;i<c;i++)
    {
        cin>>b;
        d+=b;
    }
    for(i=0; i<c; i++)
    {
        cin>>a[i];
    }
    sort(a,a+c,greater<int>());
    e=a[0]+a[1];
    if(e>=d)
    {
        cout<<"YES\n";
    }
    else
    {
        cout<<"NO\n";
    }
    return 0;
}
