#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll a,c,d,e=0,f,i,k,l;
    cin>>a>>c>>d;
    while(d--)
    {
        e+=(a+c)*2-4;
        a-=4;
        c-=4;
    }
    cout<<e<<endl;
    return 0;
}
