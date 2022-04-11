#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long a,b,c=0,d,e,f,i,j,k,l;
    cin>>a>>b;
    if(a==b) cout<<0<<endl;
    else if(a>b) cout<<a-b<<endl;
    else
    {
        while(b-a!=0)
        {
            if(b%2!=0 || b<a) b++;
            else b/=2;
            c++;
        }
        cout<<c<<endl;
    }
    return 0;
}
