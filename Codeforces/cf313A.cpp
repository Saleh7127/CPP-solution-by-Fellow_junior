#include<bits/stdc++.h>
using namespace std;
int main()
{
    char a[100000],b,c;
    int d,e,f,i,j,k,l;
    cin>>a;
    if(a[0]!='-')
    {
        cout<<a<<endl;
        return 0;
    }
    l=strlen(a);
    if(l==3)
    {
        if(a[1]=='0' || a[2]=='0')
        {
            if(a[1]>a[2])
                cout<<a[2]<<endl;
            else
                cout<<a[1]<<endl;
            return 0;
        }
        else
        {
            if(a[1]>a[2])
                cout<<a[0]<<a[2]<<endl;
            else
                cout<<a[0]<<a[1]<<endl;
            return 0;
        }
    }
    b=a[l-1];
    c=a[l-2];
    if(b>c)
    {
        for(i=0; i<l; i++)
        {
            if(i!=l-1)
                cout<<a[i];
        }
        cout<<endl;
    }
    else
    {
        for(i=0; i<l; i++)
        {
            if(i!=l-2)
                cout<<a[i];
        }
        cout<<endl;
    }
    return 0;
}
