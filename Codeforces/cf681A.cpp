#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    int b,c,d,e=0,f,i,j,k,l;
    cin>>b;
    while(b--)
    {
        cin>>a;
        cin>>c>>d;
        if(c>=2400 && d>c)
        {
            e=1;
        }
    }
    if(e==1) cout<<"YES\n";
    else cout<<"NO\n";

    return 0;
}
