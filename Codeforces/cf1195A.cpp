#include<bits/stdc++.h>
using namespace std;
int main()
{
    int b,c,d=0,e,i,j,k,l;
    cin>>b>>c;
    int a[10000]={0};
    for(i=0;i<b;i++)
    {
        cin>>e;
        a[e]++;
    }
    for(j=1;j<=c;j++)
    {
        if(a[j]%2)
        {
            d++;
        }
    }
    cout<<b-d/2<<"\n";
    return 0;
}
