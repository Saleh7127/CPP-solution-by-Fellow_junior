#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long a,b,c=0,d,e,f,i,j,k,l;
    cin>>a>>b;
    while(b%a==0)
    {
        b/=a;
        c++;
    }
    if(b==1) cout<<"YES\n"<<c-1<<endl;
    else cout<<"NO\n";
    return 0;
}
