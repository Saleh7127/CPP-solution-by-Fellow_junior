#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int tt,a,n,d,e,f=0,i,j=0,k=0,l=0,o,p;
    int c[100005]={0};
    cin>>tt;
    for(i=0; i<tt; i++)
    {
        cin>>a;
        f=max(f,a);
        c[a]++;
    }
    for(i=1; i<=f; i++)
    {
        j+=(c[i]/4);
        k+=(c[i]%4)/2;
    }
    cin>>n;
    char x;
    while(n--)
    {
        cin>>x>>d;
        j-=(c[d]/4);
        k-=(c[d]%4)/2;
        if(x=='+')
        {
            c[d]++;
        }
        else
        {
            c[d]--;
        }
        j+=(c[d]/4);
        k+=(c[d]%4)/2;
        if(j>=2)
        {
            cout<<"YES"<<endl;
        }
        else if(j>=1 && k>=2)
        {
            cout<<"YES"<<endl;
        }
        else cout<<"NO"<<endl;
    }
    return 0;
}
