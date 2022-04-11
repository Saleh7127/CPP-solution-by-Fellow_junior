#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long a,b,c,d,e=0,f;
    char g;
    cin>>a>>b;
    d=b;
    while(a--)
    {
        cin>>g>>c;
        if(g=='+') d+=c;
        else if(g=='-') d-=c;
        if(d<0)
        {
            e++;
            d=d+c;
        }
    }
    cout<<d<<" "<<e;
    return 0;
}
