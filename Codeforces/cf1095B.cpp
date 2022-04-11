#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[100000],b,c,d,e,f,i,j,k,l;
    cin>>b;
    for(i=0;i<b;i++)
    {
        cin>>a[i];
    }
    sort(a,a+b);
    d=min(a[b-1]-a[1],a[b-2]-a[0]);
    cout<<d<<endl;

    return 0;
}
