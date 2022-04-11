#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d,e=0,f=0;
    cin>>a>>b;
    c=min(a,b);
    d=max(a,b);
    e=d-c;
    f=e/2;
    cout<<c<<" "<<f<<endl;

    return 0;
}
