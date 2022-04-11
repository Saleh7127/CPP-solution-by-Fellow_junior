#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int a,b,c=0,d=0,e,f,i,j,k,l;
    cin>>a>>b;
    if(a<=b)
    {
        cout<<a-1<<endl;
    }
    else
    {
        c=b;
        d=a-b;
        for(i=2;i<=d;i++)
        {
            c+=i;
        }
        cout<<c<<endl;
    }
    return 0;
}
