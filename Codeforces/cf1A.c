#include<stdio.h>
#include<math.h>

int main()
{
   long long int a,b,c,d,e;
    scanf("%lld %lld %lld",&a,&b,&c);
    if(a%c ==0) {d= a/c ;}
    if(a%c !=0) { d = a/c + 1 ;}
    if(b%c ==0) {e= b/c ;}
    if(b%c !=0) {e = b/c +1 ;}


    printf("%.0lld\n",d*e);

}
