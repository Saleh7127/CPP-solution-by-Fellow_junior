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
       ll n,k,a,b,c;
       cin>>a>>b>>k>>n;
       if(abs(a-b)%(2*k)==0) cout<<"Yes"<<endl;
       else cout<<"No"<<endl;
   }


   return 0;
}
/*
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
       string a;
       ll b,c,d,e,f,i,j,k,l;
       cin>>a;
       b=a.size();
       if(b&1) cout<<"-1"<<endl;
       else

       {
           j=k=0;
           for(i=0;i<b;i++)
           {
               if(a[i]=='0') j++;
               else k++;
           }
           if(j==0 || k==0) cout<<-1<<endl;
           else cout<<abs(j-k)/2<<endl;
       }

   }


   return 0;
}
*/


/*
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
       ll b,c,d,i,j,k=0;
       string a;
       cin>>b>>a;
       for(i=0;i<b;i++)
       {
           if(a[i]=='1') k++;
       }
       j=120-b+k;
       double s=(double)j*100.00/120.00;
       if(s>=75.00) cout<<"YES"<<endl;
       else cout<<"NO"<<endl;
   }


   return 0;
}
*/
