#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int a[200000+5],b,c,d,e,f,i,j,k,l,m;
    a[0]=0;
    a[1]=1;
    for(i=0; i<=100000; i++)
    {
        a[2*i]=a[i];
        a[2*i+1]=a[i]+a[i+1];
    }
    while(1)
    {
        c=0;
        cin>>b;
        if(b==0)
            break;
        for(i=0; i<=b; i++)
        {
            c=max(c,a[i]);
        }
        cout<<c<<endl;
    }
    return 0;
}
