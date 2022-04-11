#include <bits/stdc++.h>
using namespace std;
int main()
{

    int a,b,c,d;
    scanf("%d %d %d",&a,&b,&c);
    d=(a*b)+(a*c)+(b*c)-a-b-c;
    printf("%d\n",d+1);

    return 0;
}
