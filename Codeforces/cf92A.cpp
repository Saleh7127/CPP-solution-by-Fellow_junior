#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d,e,f,i,j,k,l;
    cin>>a>>b;
    c=(a*(a+1))/2;
    b=b%c;
    for(i=1;b>=i;i++)
    {
        b=b-i;
    }
    cout<<b<<endl;
    return 0;
}
