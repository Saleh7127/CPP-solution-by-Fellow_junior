#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b=0,c=0,d,e,f,i,j,k,l;
    cin>>a;
    for(i=1;i<=a;i++)
    {
        b=(i*i+i)/2;
        if(b==a) c++;
    }
    if(c>0) cout<<"YES\n";
    else cout<<"NO\n";
}
