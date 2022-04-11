#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int tt; cin>>tt; for(int cs=1;cs<=tt;cs++)
int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);

   test
   {
        ll n,m,i,j,k=0,l=0;

        string a;

        cin>>a;

        map<char,ll>x;

        for(i=0;i<a.size();i++)
        {
             x[a[i]]++;
        }
        for(char s='a' ;s<='z';s++)
        {
             if(x[s]==1)
             {
                  if(k<l) k++;
                  else l++;
             }
             else if(x[s]>1)
             {
                  k++,l++;
             }
        }

        cout<<min(k,l)<<endl;
   }


   return 0;
}

