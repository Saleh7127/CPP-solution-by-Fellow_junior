#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,a,b,c,d,e,f,i,j,k,l;
    cin>>t;
    while(t--)
    {
        cin>>a>>b;
        if(a<=b)
        {
            cout<<"NO\n";
        }
        else if(a%b==0)
        {
            cout<<"YES\n";
        }
        else if(a%b!=0)
        {
            cout<<"NO\n";
        }
    }
    return 0;
}
