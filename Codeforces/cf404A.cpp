#include<bits/stdc++.h>
using namespace std;
int main()
{
    int y,n,k,a=0,b,c,i,j,l;
    cin>>y>>k>>n;
    for(i=k;i<=n;i+=k)
    {
        if(i-y>0)
        {
            cout<<i-y<<" ";
            a=1;
        }
    }
    if(a==0) cout<<-1;
    cout<<endl;
}
