#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b,c,d,e,f,i,j,k,l;
    cin>>a>>b>>c;
    d=abs(a)+abs(b);
    e=c-a-b;
    if(d<=c && e%2==0) cout<<"Yes\n";
    else cout<<"No\n";
    return 0;
}
