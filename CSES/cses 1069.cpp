#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll c=1,d=0,i,j,k,l;
    string a;
    getline(cin,a);
    l=a.size();
    for(i=1;i<=l;i++)
    {
        if(a[i]==a[i-1]) c++;
        else
        {
            d=max(c,d);
            c=1;
        }
    }
    if(l==1) cout<<1<<endl;
    else cout<<d<<endl;
    return 0;
}

