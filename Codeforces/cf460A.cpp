#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int a,b,c,d,e,f,i,j,k;
    cin>>a>>b;
    c=a;
    while((a/b)!=0)
    {
        d=a/b;
        c+=d;
        a=d+(a%b);
    }
    cout<<c<<endl;
    return 0;
}
