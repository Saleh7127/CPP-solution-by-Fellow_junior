#include <bits/stdc++.h>
using namespace std;
int minlength(string a,int lenn)
{
    int ans=10000000,i;
    for(i=0;i<lenn-1;i++)
    {
        ans=min(ans,abs(a[i]-a[i+1]));
    }
    return ans;
}

int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);

   string a,c,xx;
   while(getline(cin,a))
   {
       c=a;
       int i,j,k,ans=-10000000,length;
       int l=a.size();
       length=minlength(a,l);
       if(length>ans)
       {
           ans=length;
           xx=a;
       }
       for(i=0;i<10;i++)
       {
           if(prev_permutation(a.begin(),a.end()))
           {
               length=minlength(a,l);
               if(length>ans)
               {
                   ans=length;
                   xx=a;
               }
               if(length==ans)
               {
                   xx=min(a,xx);
               }
           }
       }
       for(i=0;i<10;i++)
       {
           if(next_permutation(c.begin(),c.end()))
           {
               length=minlength(c,l);
               if(length>ans)
               {
                   ans=length;
                   xx=c;
               }
               if(length==ans)
               {
                   xx=min(c,xx);
               }
           }
       }
       cout<<xx<<ans<<endl;
   }
   return 0;
}
