#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int tt; cin>>tt; for(int cs=1;cs<=tt;cs++)

struct parinakichu{

   ll x,y,z;

}a[500005];

bool cmp(parinakichu b, parinakichu c)
{
     if(b.x==c.x) return b.y>c.y;

     return b.x<c.x;
}

int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);


   ll n,m,i,j,k,l;

   cin>>n;

   for(i=0;i<n;i++)
   {
        cin>>a[i].x>>a[i].y;
        a[i].z=i+1;
   }

   sort(a,a+n,cmp);

   for(i=0;i<n-1;i++)
   {
        if(a[i].y>=a[i+1].y)
        {
             cout<<a[i+1].z<<" "<<a[i].z<<endl;
             return 0;
        }
   }

   cout<<"-1 -1"<<endl;

   return 0;
}
