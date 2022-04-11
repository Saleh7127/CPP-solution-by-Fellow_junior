#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long a,b,c,d=-100000000,e,f,i,j,k,l;
    cin>>b;
    while(b--)
    {
        cin>>a;
        c=sqrt(a);
        if(c*c!=a || a<0)
        {
            d=max(d,a);
        }
    }
    cout<<d<<endl;
    return 0;
}
