#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long a,b,c,d,e,f,i,j,k,l;
    cin>>a;
    while(a--)
    {
        c=0;
        cin>>b;
        c=(b*(b+1))/2;
        d=1;
        while(d<=b)
        {
            c=c-d*2;
            d=d*2;
        }
        cout<<c<<endl;
    }
    return 0;
}
