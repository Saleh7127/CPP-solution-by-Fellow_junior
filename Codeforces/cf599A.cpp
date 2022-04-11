#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d,e,f,i,j,k,l;
    cin>>a>>b>>c;
    d=min(a,b+c)+min(c,a+b)+min(b,a+c);
    cout<<d<<endl;
    return 0;
}
