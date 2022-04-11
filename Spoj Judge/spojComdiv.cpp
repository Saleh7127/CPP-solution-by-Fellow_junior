#include <bits/stdc++.h>
using namespace std;

int nod(int a)
{
    int c=0;
    for(int i=1;i*i<=a;i++)
    {
        if(i*i==a) c+=1;
        else if(a%i==0) c+=2;
    }
    return c;
}

int main()
{


   int t;
   scanf("%d",&t);
   while(t--)
   {
       int a,b,c;
       scanf("%d %d",&a,&b);
       c=__gcd(a,b);

       printf("%d\n",nod(c));
   }


   return 0;
}
