#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int tt; cin>>tt; for(int cs=1;cs<=tt;cs++)
int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);


   string a;

   while(cin>>a)
   {
        ll rem[5]={0},i,j,k=0,l=0;
        rem[0]=1;
        for(i=0;i<a.size();i++)
        {
             if(a[i]>='0' && a[i]<='9')
             {
                  l+=(a[i]-'0');
                  l%=3;
                  k+=rem[l];
                  rem[l]++;
             }
             else
             {
                  memset(rem,0,sizeof rem);
                  rem[0]=1;
                  l=0;
             }
        }

        cout<<k<<endl;
   }

   return 0;
}

