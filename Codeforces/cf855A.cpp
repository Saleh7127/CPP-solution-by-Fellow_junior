#include<bits/stdc++.h>
using namespace std;
int main()
{
    int b,d,e,f,i,j,k,l;
    map<string,int>c;
    cin>>b;
    while(b--)
    {
        string a;
        cin>>a;
        if(c.count(a)!=0) cout<<"YES\n";
        else cout<<"NO\n";
        c[a]=1;
    }
    return 0;
}
