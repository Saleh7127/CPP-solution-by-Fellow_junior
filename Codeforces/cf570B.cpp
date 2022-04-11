#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long a,b,c,d,e,f,i,j,k,l;
    cin>>a>>b;
    if(a==1)
    {
        cout<<1<<endl;
    }
    else if(a/2==b)
    {
        cout<<a/2+1<<endl;
    }
    else if(a==b)
    {
        cout<<a-1<<endl;
    }
    else if(a/2>b)
    {
        cout<<b+1<<endl;
    }
    else if(a/2<b)
    {
        cout<<b-1<<endl;
    }
    return 0;
}

