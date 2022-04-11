#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,t,b,c,d,e,f,i,j,k,l;
    cin>>t;
    while(t--)
    {
        cin>>a>>b;
        cin>>c;
        d=c;
        e=c;
        for(i=0;i<a-1;i++)
        {
            cin>>c;
            if(c>d) d=c;
            if(c<e) e=c;
        }
    if(e+b>=d-b) cout<<e+b<<endl;
    else cout<<-1<<endl;
    }
    return 0;
}

