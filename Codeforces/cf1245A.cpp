#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d,e,f,i,j,k,l;
    cin>>a;
    while(a--)
    {
        cin>>b>>c;
        d=__gcd(b,c);
        if(d==1) cout<<"Finite\n";
        else cout<<"infinite\n";
    }
    return 0;
}
