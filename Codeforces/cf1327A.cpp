#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d,e,f,i,j,k,l;
    cin>>a;
    while(a--)
    {
        cin>>b>>c;
        if(b%2==0 && c%2==0 && c<=sqrt(b)+1)
        {
            cout<<"YES\n";
        }
        else if(b%2==1 && c%2==1 && c<=sqrt(b)+1)
        {
            cout<<"YES\n";
        }
        else
        {
            cout<<"NO\n";
        }

    }
    return 0;
}
