#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a,b,c;
    int d[100]={0},e[100]={0},i,j,k,l,m=0,n;
    cin>>a>>b>>c;
    for(i=0;i<a.size();i++)
    {
        d[a[i]-65]++;
    }
    for(i=0;i<b.size();i++)
    {
        d[b[i]-65]++;
    }
    for(i=0;i<c.size();i++)
    {
        e[c[i]-65]++;
    }
    for(i=0;i<26;i++)
    {
        if(d[i]!=e[i])
        {
            m++;
        }
    }
    if(m==0)
    {
        cout<<"YES\n";
    }
    else
    {
        cout<<"NO\n";
    }
    return 0;
}
