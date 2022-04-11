#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d=0,e=0,f=0,g=0,i,j,k,l;
    cin>>a>>b;
    c=abs(a-b);
    if(c%2==1)
    {
        d=(c+1)/2;
        e=c/2;
        f=(d*d+d)/2;
        g=(e*e+e)/2;
        cout<<f+g<<endl;
    }
    else
    {
        d=c/2;
        f=2*((d*d+d)/2);
        cout<<f<<endl;
    }
    return 0;
}
