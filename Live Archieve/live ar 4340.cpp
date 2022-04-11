#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define maX 10008
bool marked[maX];
void sieve()
{
    marked[0]=1;
    marked[1]=1;
    for(ll i=4;i<=maX;i+=2)
    {
        marked[i]=1;
    }
    for(ll i=3;i<=maX;i+=2)
    {
        if(marked[i]==0)
        {
            for(ll j=i*i; j<=maX; j+=i+i)
            {
               marked[j]=1;
            }
        }
    }
}
int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);
   sieve();

   ll t,a,c,d,f,i,j,k,l;
   cin>>t;
   while(t--)
   {
       vector<ll>e;
       cin>>a>>c;
       for(i=a;i<=c;i++)
       {
           d=0;
           for(j=1;j*j<=i;j++)
           {
               if(i%j==0)
               {
                   if(j*j==i)
                   {
                       d++;
                   }
                   else d+=2;
               }
           }
           if(marked[d]==0)
           {
               e.push_back(i);
           }
       }
       if(e.size()==0)
       {
           cout<<-1<<endl;
       }
       else
       {
           for(i=0;i<e.size();i++)
           {
               if(i==0) cout<<e[i];
               else cout<<" "<<e[i];
           }
           cout<<endl;
       }

   }


   return 0;
}
