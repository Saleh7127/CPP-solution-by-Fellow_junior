#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d,e,f,i,j,k,l;
    cin>>d;
    while(d--)
    {
        e=0;
        cin>>a>>b>>c;
        e=abs(a-b)+abs(b-c)+abs(a-c)-4;
        if(e<0) e=0;
        cout<<e<<endl;
    }
    return 0;
}
