#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)

ll vol(char ch)
{
    if(ch=='a' || ch=='e' || ch=='i' || ch=='o'|| ch=='u')
    {
        return 1;
    }
    return 0;
}

int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);

   string a,c;
   ll i,j,k,l;
   test
   {
       cin>>a>>c;
       l=0;
       if(a.size()!=c.size())
       {
           cout<<"No"<<endl;
       }
       else if(a==c) cout<<"Yes"<<endl;
       else
       {
           for(i=0;i<a.size();i++)
           {
               if(a[i]!=c[i])
               {
                   if(vol(a[i])==1 && vol(c[i])==1)
                   {
                       continue;
                   }
                   else
                   {
                       l=1;
                       break;
                   }
               }
           }
           if(l) cout<<"No"<<endl;
           else cout<<"Yes"<<endl;
       }
   }


   return 0;
}
