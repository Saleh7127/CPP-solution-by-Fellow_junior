#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,n,d,x,y,m;
    cin>>n>>d;
    cin>>m;
    while(m--)
    {
        a=0;
        b=0;
        cin>>x>>y;
        a=(x+y+d-2*n)*(x+y-d);
        b=(y-x-d)*(y-x+d);
        if(a<=0 && b<=0) cout<<"YES\n";
        else cout<<"NO\n";

    }
    return 0;
}
