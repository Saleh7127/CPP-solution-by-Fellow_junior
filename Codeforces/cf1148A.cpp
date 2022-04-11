#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b,c,d,e,i,j,k,l;
    cin>>a>>b>>c;
    if(abs(a-b)==1 || a==b)
    {
        d=(a+b+(2*c));
        cout<<d<<"\n";
    }
    else
    {
        d=min(a,b)*2+(2*c)+1;
        cout<<d<<"\n";
    }
    return 0;
}
