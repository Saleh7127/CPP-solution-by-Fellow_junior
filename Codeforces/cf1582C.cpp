/***
 created: 2021-10-24-20.54.53
***/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int tt; cin>>tt; for(int cs=1;cs<=tt;cs++)
#define get_lost_idiot return 0

int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);



   test
   {
        ll n,m,i,j,k,l=INT_MAX;

        string a;

        cin>>n>>a;

        for(auto d='a';d<='z';d++)
        {
             i=0,j=n-1;
             k=0;
             while(i<=j)
             {
                  if(a[i]==a[j]) i++,j--;
                  else
                  {
                       if(a[i]==d) i++,k++;
                       else if (a[j]==d) j--,k++;
                       else
                       {
                            k=INT_MAX;
                            break;
                       }
                  }
             }

             l=min(l,k);
        }

        if(l==INT_MAX) cout<<-1<<"\n";
        else cout<<l<<"\n";
   }

   get_lost_idiot;
}
