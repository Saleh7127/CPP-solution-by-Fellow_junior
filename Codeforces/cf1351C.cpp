#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    string a;
    ll t,s,w,e,n,i,j,k,l;
    cin>>t;
    while(t--)
    {
        s=0;
        n=0;
        w=0;
        e=0;
        cin>>a;
        for(i=0;i<a.size();i++)
        {
            if(a[i]=='S') s++;
            if(a[i]=='W') w++;
            if(a[i]=='N') n++;
            if(a[i]=='E') e++;
        }
        k=n*5+s+e+w*5;
        cout<<k<<endl;
    }
    return 0;
}
