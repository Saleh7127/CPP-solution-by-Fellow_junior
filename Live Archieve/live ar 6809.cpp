#include <bits/stdc++.h>
using namespace std;
#define ui unsigned int
#define fellow_junior  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
   fellow_junior
   int t,i,j,left,right;
   ui a,c,d,e;
   scanf("%d",&t);
   for(i=1;i<=t;i++)
   {
       scanf("%X %X",&a,&c);
       d=a,e=c;
       left=right=0;
       while(d!=e && left<=31)
       {
           d=(d<<1)|(d>>31);
           left++;
       }
       while(a!=c && right<=31 && left!=32)
       {
           a=(a>>1)|(a<<31);
           right++;
       }
       if(left==32) printf("Case #%d: Not possible\n",i);
       else if(left<right) printf("Case #%d: %d Left\n",i,left);
       else if(left>right) printf("Case #%d: %d Right\n",i,right);
       else printf("Case #%d: %d Any\n",i,left);
   }


   return 0;
}
