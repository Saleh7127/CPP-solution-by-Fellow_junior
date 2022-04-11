#include <bits/stdc++.h>
using namespace std;
#define test int t; cin>>t; while (t--)
#define ll long long int
#define Faster  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define pi acos(-1)
#define yes printf("YES\n");
#define no printf("NO\n");
#define maX 10008
bool marked[maX];
void sieve()
{
    marked[0]=1;
    marked[1]=1;
    for(int i=4;i<=maX;i+=2)
    {
        marked[i]=1;
    }
    for(int i=3;i<=maX;i+=2)
    {
        if(marked[i]==0)
        {
            for(int j=i*i; j<=maX; j+=i+i)
            {
               marked[j]=1;
            }
        }
    }
}
int main()
{
   Faster
   sieve();
   test
   {
       int a,c,d,i,j,k,l;
       cin>>a;
       for(i=a/2+1;i<=maX;i++)
       {
           if(marked[i]==0)
           {
               printf("%d\n",i);
               break;
           }
       }
   }
   return 0;
}
