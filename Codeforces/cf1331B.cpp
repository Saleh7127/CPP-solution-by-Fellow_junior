#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a,b=0,c=0,d,e,f,i,j,k,l;
    cin>>a;
    for(i=2;i<=998;i++)
    {
        if(a%i==0)
        {
            b=i;
            c=a/i;
            break;
        }
    }
    cout<<b<<c<<endl;
    return 0;
}
