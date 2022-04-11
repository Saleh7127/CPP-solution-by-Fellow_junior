#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);

   test
   {
       ll n,c,d,e,f,i,j,k,l;
       char a[205][205];
       cin>>n;
       for(i=1;i<=n;i++)
       {
           for(j=1;j<=n;j++)
           {
               cin>>a[i][j];
           }
       }
       if(a[1][2]==a[2][1] && a[n-1][n]==a[n][n-1] && a[1][2]!=a[n][n-1])
       {
           cout<<0<<endl;
       }
       else if(a[1][2]==a[2][1] && a[n-1][n]==a[n][n-1] && a[1][2]==a[n][n-1])
       {
           cout<<2<<endl;
           cout<<"1 2\n2 1"<<endl;
       }
       else if(a[1][2]==a[2][1] && a[n-1][n]!=a[n][n-1])
       {
           if(a[1][2]==a[n-1][n])
           {
               cout<<"1\n"<<n-1<<" "<<n<<endl;
           }
           else cout<<"1\n"<<n<<" "<<n-1<<endl;
       }
       else if(a[1][2]!=a[2][1] && a[n-1][n]==a[n][n-1])
       {
           if(a[1][2]==a[n-1][n])
           {
               cout<<"1\n1 2"<<endl;
           }
           else cout<<"1\n2 1"<<endl;
       }
       else if(a[1][2]!=a[2][1] && a[n-1][n]!=a[n][n-1])
       {
           if(a[1][2]==a[n-1][n])
           {
               cout<<"2\n1 2\n"<<n<<" "<<n-1<<endl;
           }
           else cout<<"2\n1 2\n"<<n-1<<" "<<n<<endl;
       }
   }


   return 0;
}
