#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long a,b,c,d,e,f,i,j,k,l;
    cin>>a;
    while(a>0)
    {
        if(a%10!=1 && a%100!=14 && a%1000!=144)
        {
            cout<<"NO\n";
            return 0;
        }
        a=a/10;
    }
    cout<<"YES\n";
    return 0;
}
