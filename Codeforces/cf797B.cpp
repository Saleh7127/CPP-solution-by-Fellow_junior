#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,c,d=0,e=100000,f,i,j,k,l;
    cin>>c;
    while(c--)
    {
        cin>>a;
        if(a>0) d+=a;
        if(a%2)
        {
            e=min(e,abs(a));
        }
    }
    if(d%2==1) printf("%d\n",d);
    else printf("%d\n",d-e);
}
