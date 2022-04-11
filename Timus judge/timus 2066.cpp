#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll a,c,d,e,f,i,j,k,l;
    cin>>a>>c>>d;
    e=a-c-d;
    f=a-c*d;
    cout<<min(e,f)<<endl;
    return 0;
}
