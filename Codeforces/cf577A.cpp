#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a=0,b,c,d,e,f,i,j,k,l,n,m;
    cin>>n>>m;
    for(i=1;i<=n;i++)
    {
        if(m%i==0 && m/i<=n)
        {
            a++;
        }
    }
    cout<<a<<endl;
    return 0;
}
