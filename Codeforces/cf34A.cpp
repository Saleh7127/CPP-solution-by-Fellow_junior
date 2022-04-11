#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a[100000],b,c,d,e,f,i,j,k,l;
    cin>>b;
    for(i=0; i<b; i++)
    {
        cin>>a[i];
    }
    c=abs(a[0]-a[b-1]);
    d=1;
    e=b;
    for(i=0; i<b-1; i++)
    {
        if(abs(a[i]-a[i+1])<c)
        {
            c=abs(a[i]-a[i+1]);
            d=i+1;
            e=i+2;
        }
    }
    printf("%d %d\n",d,e);
    return 0;
}
