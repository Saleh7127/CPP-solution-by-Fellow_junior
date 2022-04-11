#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int a,b,c,d,e,f,i,j,k,l;
    cin>>b;
    while(b--)
    {
        cin>>a;
        if(a<3) cout<<"NO\n";
        else if(a==4 || a==5 || a==8 || a==11) cout<<"NO\n";
        else cout<<"YES\n";
    }
    return 0;
}
