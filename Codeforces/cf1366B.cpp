#include <bits/stdc++.h>
using namespace std;
#define test int t; cin>>t; while (t--)
#define ll long long int
#define Faster  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define pi acos(-1)
#define yes printf("YES\n");
#define no printf("NO\n");
int main()
{
   Faster
   test
   {
       int left,right,i,j=0,k,l,r,n,m,x;
       cin>>n>>x>>m;
       left=x;
        right=x;
        while(m--)
        {
            cin>>l>>r;
            if(max(l,left)<=min(r,right))
            {
                left=min(l,left);
                right=max(r,right);
            }
        }
        cout<<right-left+1<<endl;
   }
   return 0;
}
