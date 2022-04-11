#include <bits/stdc++.h>
using namespace std;
#define test int t; cin>>t; while (t--)
#define ll long long int
#define fellow_junior  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
   fellow_junior
   ll n,m,a,c,d,i,j,k,l;
   test
   {
       cin>>n>>m;
       c=0;
       while(n>=m)
       {
           n-=(m-1);
           c++;
       }
       if(n>1) cout<<"cannot do this"<<endl;
       else cout<<c<<endl;
   }
   return 0;
}
/*
another process
if ((n - 1) % (m - 1) != 0)
{
    puts("cannot do this");
}
else
{
    printf("%d\n", (n - 1) / (m - 1));
}
////


while(n>=m)
{
    int temp = n%m;
    d= n/m;
    count+=d;
    n=d+temp;
}
//cout<<n<<" ";
if(n>1)
{
    printf("cannot do this\n");
}
else
{
    printf("%d\n",count);
}
*/
