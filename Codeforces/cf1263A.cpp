#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[10000],b,c,d,e,f,i,j,k,l;
    cin>>d;
    while(d--)
    {
        b=0;
        c=0;
        for(i=0;i<3;i++)
        {
            cin>>a[i];
        }
        sort(a,a+3);
        b=a[0]+a[1];
        c=a[0]+a[1]+a[2];
        if(b<a[2])
        {
            cout<<b<<endl;
        }
        else
        {
            cout<<c/2<<endl;
        }
    }
    return 0;
}
