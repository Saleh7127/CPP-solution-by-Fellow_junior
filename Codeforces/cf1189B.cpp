#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[200000],b,c,d,e,f,i,j,k,l;
    cin>>b;
    for(i=1;i<=b;i++)
    {
        cin>>a[i];
    }
    sort(a+1,a+b+1);
    if(a[b]<a[b-1]+a[b-2])
    {
        cout<<"YES\n";
        for(j=1;j<=b-2;j++)
        {
            cout<<a[j]<<" ";
        }
        printf("%d %d\n",a[b],a[b-1]);
    }
    else cout<<"NO\n";
    return 0;
}
