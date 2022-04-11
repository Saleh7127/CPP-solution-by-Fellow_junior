#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b,c,d,e,u,v,x1,x2,x,y,y1,y2;
    cin>>e;
    while(e--)
    {
        cin>>a>>b>>c>>d;
        cin>>x>>y>>x1>>y1>>x2>>y2;
        u=b-a+x;
        v=d-c+y;
        if((x1==x2 && a==b &&a!=0)||(y1==y2 && d==c && c!=0))
        {
            cout<<"NO\n";
        }
        else if(x1<=u && u<=x2 && y1<=v && v<=y2)
        {
            cout<<"YES\n";
        }
        else
        {
            cout<<"NO\n";
        }
    }
    return 0;
}
