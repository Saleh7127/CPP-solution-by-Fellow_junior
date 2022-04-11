#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d,e,f,i,j,k;
    cin>>a>>b;
    if(a<b) cout<<-1<<endl;
    else
    {
        c=a/2+a%2;
        if(c%b!=0)
        {
            d=b-(c%b);
            c=c+d;
        }
        cout<<c<<endl;
    }
    return 0;
}
