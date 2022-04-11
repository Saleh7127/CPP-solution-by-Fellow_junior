#include<bits/stdc++.h>
using namespace std;
int main()
{
    int b,c,d,e,i,j,k;
    cin>>b;
    int a[b+5];
    for(i=0;i<b;i++)
    {
        cin>>a[i];
    }
    sort(a,a+b,greater<int>());
    for(i=0;i<b;i++)
    {
        if(a[i]!=a[i+1])
        {
            cout<<a[i]<<" ";
        }
    }
    return 0;
}
