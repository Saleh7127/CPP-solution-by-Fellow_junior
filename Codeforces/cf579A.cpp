#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b=0,c;
    scanf("%d",&a);
    while(a!=0)
    {
        b+=(a%2);
        a/=2;
    }
    printf("%d\n",b);

    return 0;
}
