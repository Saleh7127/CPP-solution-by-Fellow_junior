#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll a,b,c,d,e,f,i,j,k,l;
    cin>>a>>b;
    if(a==1)
    {
        if(b<10)
        {
            cout<<b<<endl;
        }
        else
        {
            cout<<-1<<endl;
        }
    }
    else
    {
        if(b<10) cout<<b;
        else cout<<1;
        for(i=1;i<a;i++)
        {
            cout<<0;
        }
        cout<<endl;
    }
    return 0;
}
