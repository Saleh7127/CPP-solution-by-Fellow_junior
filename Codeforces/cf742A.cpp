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
   ll a,c,d,e,f,i,j,k,l;
    cin>>a;
    if(a==0)
    {
         cout<<1<<endl;
         return 0;
    }
    if(a%4==1)
    {
        cout<<8<<endl;
    }
    else if(a%4==2)
    {
        cout<<4<<endl;
    }
    else if(a%4==3)
    {
        cout<<2<<endl;
    }
    else if(a%4==0)
    {
        cout<<6<<endl;
    }
    return 0;
}
