#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b,c,d,e,f,i,j,k,l;
    cin>>a;
    if(a%10==0)
    {
        cout<<a<<endl;
        return 0;
    }
    b=a%10;
    if(b<=5)
    {
        c=a-b;
        cout<<c<<endl;
    }
    else if(b>5)
    {
        c=a+(10-b);
        cout<<c<<endl;
    }
    return 0;
}
