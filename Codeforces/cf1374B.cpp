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
       ll a,c=0,d=0,e,f,i,j,k,l;
       cin>>a;
       while(1)
       {
           if(a==1) break;
           else if(a%6==0)
           {
               a/=6;
               c++;
           }
           else if((a*2)%6==0)
           {
               a*=2;
               a/=6;
               c+=2;
           }
           else
           {
               d=1;
               break;
           }
       }
       if(d==1) cout<<-1<<endl;
       else cout<<c<<endl;
   }
   return 0;
}
