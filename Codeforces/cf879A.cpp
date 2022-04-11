#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long t,a,b,c=0,d,e,f,i,j,k,l;
    cin>>t;
    for(i=0;i<t;i++)
    {
        cin>>a>>b;
        while(a<=c)
        {
            a+=b;
        }
        c=a;
    }
    cout<<c<<endl;
    return 0;
}

