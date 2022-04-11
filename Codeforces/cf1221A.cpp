#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d,e,i,j,k,l,t;
    cin>>t;
    while(t--)
    {
        c=0;
        cin>>a;
        while(a--)
        {
            cin>>b;
            if(b<=2048)
            {
                c+=b;
            }
        }
        if(c>=2048)
        {
            cout<<"YES\n";
        }
        else cout<<"NO\n";
    }
    return 0;
}
