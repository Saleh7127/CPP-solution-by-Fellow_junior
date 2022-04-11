#include<bits/stdc++.h>
using namespace std;
long long d=0;
int main()
{
    int a[1000],i,j,k,c,b,e=0,f=0;
    for(i=0; i<3; i++)
    {
        cin>>a[i];
    }
    cin>>c;
    sort(a,a+3);
    e=a[1]-a[0];
    f=a[2]-a[1];
    if(e<c)
    {
        d=d+c-e;
    }
    if(f<c)
    {
        d=d+c-f;
    }
    cout<<d<<endl;
    return 0;
}
