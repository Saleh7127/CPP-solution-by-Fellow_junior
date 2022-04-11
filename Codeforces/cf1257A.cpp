#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d,e,t,f,i,j,k,l,n,x;
    cin>>t;
    while(t--)
    {
        cin>>n>>x>>a>>b;
        if(abs(a-b)+x<n)
        {
            cout<<abs(a-b)+x<<endl;
        }
        else if(x==0)
        {
            cout<<abs(a-b)<<endl;
        }
        else
        {
            cout<<abs(n-1)<<endl;
        }
    }
    return 0;
}
