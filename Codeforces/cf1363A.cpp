#include <bits/stdc++.h>
using namespace std;
#define test int t; cin>>t; while (t--)
#define ll long long int
#define pi acos(-1)
int main()
{
   test
   {
        ll a,c,d,e=0,o=0,f,i,j,k,l;
        cin>>c>>d;
        for(i=0; i<c; i++)
        {
            cin>>a;
            if(a%2==1) o++;
            else e++;
        }
        if(o%2==0 && c==d) printf("No\n");
        else if(o==0 || (e==0 && d%2==0)) printf("No\n");
        else printf("Yes\n");
  }
   return 0;
}
