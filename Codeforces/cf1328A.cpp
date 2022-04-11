#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,a,b,c,d,e,f,i,j,k,l;
    cin>>t;
    while(t--)
    {
        cin>>a>>b;
        if(a%b==0)
        {
            cout<<0<<endl;
        }
        else
        {
            c=a%b;
            d=b-c;
            cout<<d<<endl;
        }
    }

    return 0;
}
