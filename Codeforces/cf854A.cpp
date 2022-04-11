#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int a,b,c,d,e,f,i,j,k,l;
    cin>>a;
    if(a%2==1)
    {
        b=a/2;
        c=(a+1)/2;
        cout<<b<<" "<<c<<endl;
    }
    else if((a/2)%2==1)
    {
        b=a/2-2;
        c=a/2+2;
        cout<<b<<" "<<c<<endl;
    }
    else
    {
        b=a/2-1;
        c=a/2+1;
        cout<<b<<" "<<c<<endl;
    }
    return 0;
}
