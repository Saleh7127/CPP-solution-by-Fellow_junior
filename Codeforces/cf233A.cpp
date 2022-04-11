#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,i,j,k,l;
    scanf("%d",&a);
    if(a%2!=0) printf("-1\n");
    else
    {
        for(i=a;i>=1;i--)
        {
            printf("%d ",i);
        }
    }
    return 0;
}
