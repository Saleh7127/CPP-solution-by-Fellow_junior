#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long a,b,c,d,e,f,i,j,k,t;
    cin>>t;
    while(t--)
    {
        cin>>a>>b>>c;
        d=c%a;
        if(c%a==b) cout<<c<<endl;
        else if(d>=b)
        {
            c=c-(d-b);
            cout<<c<<endl;
        }
        else
        {
            c=c-a+(b-d);
            cout<<c<<endl;
        }
    }
    return 0;
}
