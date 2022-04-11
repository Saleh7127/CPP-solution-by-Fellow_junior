#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long a,b,c,d,e,i,j,k;
    cin>>a>>b;
    c=abs(a-b);
    if(c==0)
    {
        cout<<a<<endl;
    }
    else if(c==3 && b%3==0)
    {
        cout<<3<<endl;
    }
    else
    {
        cout<<2<<endl;
    }
    return 0;
}
