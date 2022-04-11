#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int a,b,c,d,e,f,i,h,j,k,l;
    cin>>a>>b>>c>>d>>e>>f;
    while(b)
    {
        a+=b;
        if(b==d) a-=c;
        if(b==f) a-=e;
        if(a<0) a=0;
        b--;
    }
    cout<<a<<endl;
}
