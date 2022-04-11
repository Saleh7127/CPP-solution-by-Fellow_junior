#include<bits/stdc++.h>
using namespace std;
int main()
{
    int b,c,d,e,f=0,i,j,k,l;
    string a;
    cin>>b>>c>>d>>e;
    cin>>a;
    for(i=0;i<a.size();i++)
    {
        if(a[i]=='1') f+=b;
        if(a[i]=='2') f+=c;
        if(a[i]=='3') f+=d;
        if(a[i]=='4') f+=e;
    }
    cout<<f<<endl;
    return 0;
}
