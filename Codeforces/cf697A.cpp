#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d=0,e,f,i,j,k,l;
    cin>>a>>b>>c;
    if(c<a)
    {
        d=0;
    }
    else if(c==a)
    {
        d=1;
    }
    else if(c==a+1)
    {
        d=0;
    }
    else
    {
        c=c-a;
        if(c%b==1 || c%b==0)
        {
            d=1;
        }
        else d=0;
    }
    if(d==1) cout<<"YES\n";
    else cout<<"NO\n";
    return 0;
}
