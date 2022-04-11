#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long a,b,c,d,e,f,i,j,k,l;
    cin>>a;
    while(a--)
    {
        cin>>b>>c>>d;
        e=(d+1)/2;
        f=d/2;
        i=(e*b)-(f*c);
        cout<<i<<endl;
    }
    return 0;
}
