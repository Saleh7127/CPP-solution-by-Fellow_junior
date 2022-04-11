#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[1000],b,c,d,e=0,f=0,i,j,k,l;
    cin>>b>>c;
    for(i=1; i<=b; i++)
    {
        cin>>a[i];
    }
    for(i=1; i<=b; i++)
    {
        if((a[i]+c-1)/c>=e)
        {
            e=(a[i]+c-1)/c;
            f=i;
        }
    }
    cout<<f<<endl;
    return 0;
}
