#include<bits/stdc++.h>
using namespace std;
int c=0;
int main()
{
    int a,b,d,e,i,j,k,l;
    while(scanf("%d %d",&a,&b)!=EOF)
    {
       c=abs(a-b)-1;
       if(c<0)
       {
           c=0;
       }
       printf("%d\n",c);

    }
    return 0;
}
