#include <bits/stdc++.h>
using namespace std;
#define test int t; cin>>t; while (t--)
#define ll long long int
#define fellow_junior  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
   fellow_junior

   test
   {

       ll n,a,c,d,e,f,i,j,k,l,ch=0,mr=0;
       cin>>n;
       while(n--)
       {
           cin>>a>>c;
           e=0;
           d=0;
           while(a)
           {
               d+=a%10;
               a/=10;
           }
           while(c)
           {
               e+=c%10;
               c/=10;
           }
           if(d>e) ch++;
           else if(e>d) mr++;
           else
           {
                ch++;
                mr++;
           }
       }
       if(ch>mr) cout<<0<<" "<<ch<<endl;
       else if(ch<mr) cout<<1<<" "<<mr<<endl;
       else cout<<2<<" "<<ch<<endl;
   }

   return 0;
}
