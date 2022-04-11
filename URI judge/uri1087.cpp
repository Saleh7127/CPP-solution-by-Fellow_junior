#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d,e,f,i,j,k,l;
    while(1)
    {
        cin>>a>>b>>c>>d;
        e=abs(a-c);
        f=abs(b-d);
        if(a==0 && b==0 && c==0 && d==0) break;
        else if(a==c && b==d) cout<<0<<endl;
        else if(a==c || b==d) cout<<1<<endl;
        else if(e-f==0) cout<<1<<endl;
        else cout<<2<<endl;
    }
    return 0;
}
