#include <bits/stdc++.h>
using namespace std;
int gcd( int a, int b )
{
    while(b)
    {
        a=a%b;
        swap(a,b);
    }
    return a;
}

int main()
{
   int t;
   cin>>t;
   getchar();
   string x;
   while(t--)
   {
       getline(cin,x);
       stringstream ss(x);
       int a[10000],c,d=0,e,i,f,j,k,l;
       while(ss>>a[d])
       {
           ++d;
           f=0;
           for(i=0;i<d;i++)
           {
               for(j=i+1;j<d;j++)
               {
                   k=gcd(a[i],a[j]);
                   f=max(f,k);
               }
           }
       }
       cout<<f<<endl;
   }
   return 0;
}
