#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[100000],b,c,d,e,f,i,j,k,l;
    cin>>b;
    for(i=1;i<=b;i++)
    {
        d=0;
        cin>>c;
        a[0]=2;
        for(j=1;j<=c;j++)
        {
            cin>>a[j];
        }
        for(j=0;j<c;j++)
        {
            if(a[j+1]>a[j])
            {
                d+=ceil(((double)a[j+1]-a[j])/5);
            }
        }
        printf("Case %d: %d\n",i,d);
    }
    return 0;
}
