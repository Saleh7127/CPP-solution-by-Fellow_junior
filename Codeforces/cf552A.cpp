#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d,e=0,f,i,j,k,l,t;
    cin>>t;
    while(t--)
    {
        cin>>a>>b>>c>>d;
        e+=abs(c-a+1)*abs(d-b+1);
    }
    cout<<e<<endl;
    return 0;
}
