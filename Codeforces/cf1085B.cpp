#include<bits/stdc++.h>
using namespace std;
int main ()
{
    long long int a,b,c,d,e,f,i,j,k,n,l;
    cin>>n>>k;
    for(i=k-1;i>=1;i--)
    {
        if(n%i==0)
        {
           break;
        }
    }
    d=k*(n/i)+i;
    cout<<d<<endl;
    return 0;
}
