#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long a,b,c,d,e,f,k=0,l=0,blue=0,yell=0;
    cin>>a>>b;
    cin>>c>>d>>e;
    yell=(c*2)+d;
    blue=(e*3)+d;
    if(blue<=b)
    {
        k=0;
    }
    else
    {
        k=blue-b;
    }
    if(yell<=a)
    {
        l=0;
    }
    else
    {
        l=yell-a;
    }
    f=l+k;
    if(f<0)
        f=0;
    cout<<f<<endl;
    return 0;
}
