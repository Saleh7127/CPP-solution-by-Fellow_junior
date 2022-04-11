#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,a,b,c=10000,d=0,e,f,i,j;
    cin>>t;
    while(t--)
    {
        cin>>a>>b;
        c=min(c,b);
        d=d+(a*c);
    }
    cout<<d<<endl;
}
