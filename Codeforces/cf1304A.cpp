#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b,c,d,e,f,i,j,k,t;
    cin>>t;
    while(t--)
    {
        f=0;
        e=0;
        cin>>a>>b>>c>>d;
        f=b-a;
        e=c+d;
        if(f%e==0) cout<<f/e<<endl;
        else cout<<"-1\n";
    }
    return 0;
}
