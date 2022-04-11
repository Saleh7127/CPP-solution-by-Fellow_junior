#include<bits/stdc++.h>
using namespace std;
long long int a[1000000];
int main()
{
    long long int b,d=0,e,f,i,j,k,l;
    cin>>b;
    for(i=0;i<b;i++)
    {
        cin>>a[i];
    }
    sort(a,a+b);
    for(i=0,j=b-1;j>i;j--,i++)
    {
        d+=(a[i]+a[j])*(a[i]+a[j]);
    }
    cout<<d<<endl;
    return 0;
}
