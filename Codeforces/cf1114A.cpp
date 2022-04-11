#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d,e,f,i,j,k,l;
    cin>>a>>b>>c;
    cin>>d>>e>>f;
    k=a+b+c;
    l=d+e+f;
    if(l<k || d<a || d+e-a<b)
    {
        cout<<"NO\n";
    }
    else
        cout<<"YES\n";
    return 0;
}
