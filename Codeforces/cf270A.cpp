#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d,e,i,j,k,l;
    cin>>a;
    while(a--)
    {
        cin>>b;
        if(360%(180-b)==0)
        {
            cout<<"YES\n";
        }
        else cout<<"NO\n";
    }
    return 0;
}
