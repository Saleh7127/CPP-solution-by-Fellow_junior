#include<bits/stdc++.h>
using namespace std;
int main()
{
    int b,c,d,e,f,i,j,k,l;
    cin>>b;
    int a[b];
    for(i=0;i<b;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<b;i++)
    {
        if(a[i]%2==0)
        {
            cout<<a[i]-1<<" ";
        }
        else
        {
            cout<<a[i]<<" ";
        }
    }
    return 0;
}
