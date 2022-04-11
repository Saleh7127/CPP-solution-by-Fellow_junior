#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int a[10000],b,c=0,d=0,e,f,i,j,k,l;
    cin>>b;
    for(i=1;i<=b;i++)
    {
        cin>>a[i];
        if(a[i]%2==0)
        {
            c++;
        }
        else d++;
    }
    if(c>d)
    {
        for(i=1;i<=b;i++)
        {
            if(a[i]%2!=0)
            {
                cout<<i<<endl;
            }
        }
    }
    else
    {
        for(i=1;i<=b;i++)
        {
            if(a[i]%2==0)
            {
                cout<<i<<endl;
            }
        }
    }
    return 0;
}
