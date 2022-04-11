#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll a,b,c,d,e,f,i,j,k,l;
    cin>>a>>b;
    c=pow(2,a);
    d=b%c;
    if(a<30)
        cout<<d<<endl;
    else
        cout<<b<<endl;
    return 0;
}
