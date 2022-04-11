#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,l,c,d,p,nl,np,a=0,b=0,e=0,f=0;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    a=(k*l)/nl;
    b=(c*d);
    e=(p/np);
    f=min(a,min(b,e));
    f=f/n;
    cout<<f<<endl;
    return 0;
}
