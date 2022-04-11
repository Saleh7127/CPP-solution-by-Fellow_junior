#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[100000],b,c=1,d,e,f,i,j,k,l;
    cin>>b;
    a[0]=1;
    a[1]=2;
    for(i=2;i<=b;i++)
    {
        a[i]=a[i-1]+a[i-2];
    }
    for(i=1;i<=b;i++)
    {
        if(i==a[c])
        {
            cout<<"O";
            c++;
        }
        else cout<<"o";
    }
    return 0;
}

