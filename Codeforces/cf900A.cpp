#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    int a[100000],b[100000],t,c=0,d=0,e,f,i,j,k,l;
    cin>>t;
    for(i=0;i<t;i++)
    {
        cin>>a[i]>>b[i];
    }
    for(i=0;i<t;i++)
    {
        if(a[i]>0) c++;
        else d++;
    }
    if(c<=1 || d<=1) cout<<"Yes\n";
    else cout<<"No\n";
    return 0;
}
