#include<bits/stdc++.h>
using namespace std;
int main()
{
    int b,i,j,k,l;
    string a,c,d;
    cin>>b;
    for(i=0;i<b;i++)
    {
        cin>>a;
        c+=a;
    }
    d=c;
    reverse(d.begin(),d.end());
    if(d!=c)
        cout<<"NO\n";
    else
        cout<<"YES\n";
    return 0;
}
