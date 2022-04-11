#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll k2,k3,k5,k6,k256,k32,a,c;
    cin>>k2>>k3>>k5>>k6;
    k256=min(k2,min(k5,k6));
    k32=min(k3,abs(k2-k256));
    a=k256*256+32*k32;
    cout<<a<<endl;
    return 0;
}
