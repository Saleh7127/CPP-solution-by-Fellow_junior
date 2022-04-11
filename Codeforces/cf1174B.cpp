#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a[200000],b,c=0,d=0,e,f,i,j,k,l;
    cin>>b;
    for(i=0; i<b; i++)
    {
        cin>>a[i];
        if(a[i]%2) c++;
        else d++;
    }
    if(c>0 && d>0) sort(a,a+b);
    for(k=0; k<b; k++)
    {
        if(k==b-1) printf("%d\n",a[k]);
        else printf("%d ",a[k]);
    }
    return 0;
}
