#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[10000],b[10000],c,d=0,e,f,i,j,k,l;
    cin>>c;
    for(k=0; k<10000; k++)
    {
        b[k]=0;
    }
    for(i=0; i<c; i++)
    {
        cin>>a[i];
        b[a[i]]++;
    }
    sort(a,a+c);
    for(j=0; j<c; j++)
    {
        d=max(d,b[a[j]]);
    }
    cout<<c-d<<endl;
    return 0;
}
