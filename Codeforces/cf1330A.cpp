#include<bits/stdc++.h>
using namespace std;
int main()
{
     long long int n,x,b,c,d,t,e,f,i,j,k,l;
     cin>>t;
     while(t--)
     {
         int a[220]={0};
         cin>>n>>x;
         while(n--)
         {
             cin>>b;
             a[b]=b;
         }
         for(i=1;a[i]!=0 || x>0;i++)
         {
             if(a[i]==0)
             {
                 x--;
             }
         }
          cout<<i-1<<endl;
     }
    return 0;
}


