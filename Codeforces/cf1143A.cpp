#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[100000],b,c=0,d=0,e=0,f,i,j,k,l;
    cin>>b;
    for(i=1;i<=b;i++)
    {
        cin>>a[i];
    }
    for(i=1;i<=b;i++)
    {
        if(a[i]==0) c=i;
        else d=i;
    }
    e=min(c,d);
    cout<<e<<endl;
    return 0;
}
