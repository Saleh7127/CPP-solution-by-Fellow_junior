#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d,e,f,i,j,k,l,t;
    cin>>t;
    while(t--)
    {
        d=0;
        cin>>a>>b>>c;
        if(c%3==0)
        {
            cout<<a<<endl;
        }
        else if(c%3==1)
        {
            cout<<b<<endl;
        }
        else
        {
            d=a^b;
            cout<<d<<endl;
        }
    }
    return 0;
}
