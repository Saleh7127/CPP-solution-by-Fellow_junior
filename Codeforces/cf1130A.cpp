#include<bits/stdc++.h>
using namespace std;
int d=0,e=0;
int main()
{
    int a,b,c,f,i,j,k,l;
    cin>>a;
    c=(a+1)/2;
    while(a--)
    {
        cin>>b;
        if(b>0) d++;
        if(b<0) e++;
    }
    if(d>=c) cout<<"1\n";
    else if(e>=c) cout<<"-1\n";
    else cout<<"0\n";
    return 0;
}
