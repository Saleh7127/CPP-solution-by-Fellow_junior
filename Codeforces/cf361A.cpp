#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll a,c,d,e,f,i,j,k,l;
    cin>>a>>c;
    for(i=1;i<=a;i++)
    {
        for(j=1;j<=a;j++)
        {
            if(i==j) printf("%d ",c);
            else printf("0 ");
        }
        printf("\n");
    }
    return 0;
}
