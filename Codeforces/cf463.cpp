#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long a,c,d=0,e=0,f=0,i,j,k;
    cin>>a;
    for(i=1;i<=a;i++)
    {
        cin>>c;
        d+=(e-c);
        if(d<0)
        {
            f+=-d;
            d=0;
        }
        e=c;
    }
    cout<<f<<endl;
    return 0;
}
