#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,t,d,e,f,i,j,k,l,n,s;
    cin>>t;
    while(t--)
    {
        d=0;
        cin>>a>>b>>n>>s;
        if(s<=((n*a)+b) && (s%n)<=b)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}
