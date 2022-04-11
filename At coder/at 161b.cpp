#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[100000],b,c,d=0,e=0,f=0,i,j,k,l;
    cin>>b>>c;
    for(i=0;i<b;i++)
    {
        cin>>a[i];
        d+=a[i];
    }
    for(i=0;i<b;i++)
    {
        if(a[i]*4*c>=d)
        {
            f++;
        }
    }
    if(f>=c) printf("Yes\n");
    else printf("No\n");
    return 0;
}
