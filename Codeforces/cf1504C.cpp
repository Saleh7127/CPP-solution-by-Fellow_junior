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


       string a,b,c;

       ll n,m=0,i,j=0,k=0,l=0,g=0,h=0;

       char s=')',e='(';

       cin>>n>>a;

       if(a[0]=='0' || a[n-1]=='0')
       {
           cout<<"NO"<<endl;
           continue;
       }

       for(i=0;i<n;i++)
       {
           if(a[i]=='1') l++;
       }

       if(l%2==1)
       {
           cout<<"NO"<<endl;
           continue;
       }
       b=a,c=a;

       for(i=0;i<n;i++)
       {
           if(a[i]=='1')
           {
               k++;
               if(k<=l/2)
               {
                   b[i]='(';
                   c[i]='(';
               }
               else
               {
                   b[i]=')';
                   c[i]=')';
               }
           }
           else
           {
               h++;
               if(h%2==0)
               {
                   b[i]=s;
                   c[i]=e;
               }
               else
               {
                   b[i]=e;
                   c[i]=s;
               }
           }
       }

       cout<<"YES"<<endl;
       cout<<b<<endl<<c<<endl;

   }


   return 0;
}
