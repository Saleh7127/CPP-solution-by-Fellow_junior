#include<bits/stdc++.h>
using namespace std;
int dtob(int x)
{
    int bn=0,mul=1;
    while(x>0)
    {
        bn = bn + (x%2)*mul;
        mul= mul * 10;
        x=x/2;
    }
    return bn;
}
int main()
{
    int a,a1,b1,c1,d1,b,c,d,e,f,i,j,k,l;
    cin>>f;
    for(i=1;i<=f;i++)
    {
       scanf("%d.%d.%d.%d",&a,&b,&c,&d);
       scanf("%d.%d.%d.%d",&a1,&b1,&c1,&d1);
       if(dtob(a)==a1 && dtob(b)==b1 && dtob(c)==c1 && dtob(d)==d1)
       {
           printf("Case %d: Yes\n",i);
       }
       else
       {
           printf("Case %d: No\n",i);
       }
    }
    return 0;
}
