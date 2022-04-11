#include <bits/stdc++.h>
using namespace std;
#define maX 1000000
#define ll long long
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
   sieve();

   string n;
   ll i,j,k,l,a,c;

   while(cin>>n)
   {
       a=stoi(n);
       reverse(n.begin(),n.end());
       c=stoi(n);
       if(marked[a]==1) cout<<a<<" is not prime.\n";
       else if(marked[a]==0 && marked[c]==1) cout<<a<<" is prime.\n";
       else if(marked[a]==0 && a==c) cout<<a<<" is prime.\n";
       else if(marked[a]==0 && marked[c]==0) cout<<a<<" is emirp.\n";
   }
   return 0;
}
