#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d,e,f,i,j,k,l;
    scanf("%d %d",&a,&b);
    c = b%a;
    if(c==0) printf("%d\n",b/a);
    else printf("%d\n",b/a+1);
    return 0;
}
