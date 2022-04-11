#include <bits/stdc++.h>
using namespace std;
#define test int t; cin>>t; while (t--)
#define ll long long int
#define sc(a) scanf("%lld",&a)
#define sc2(a,b) scanf("%lld %lld",&a,&b)
#define pf(a) printf("%lld",a)
#define loop1(i,a,c) for(i=a;i<=c;i++)
#define loop(i,c) for(i=0;i<c;i++)
#define modl 1000000007;
int main()
{
   test
   {
       string a;
       string c="";
       ll d,e,f,i,j,k,l,num;
       cin>>a;
       l=a.size();
       for(i=0;i<l;i++)
       {
           if(a[i]=='a' || a[i]=='e' || a[i]=='i' || a[i]=='o' || a[i]=='u') c+='0';
           else c+='1';
       }
       d = stoi(c, 0, 2);
       num=d%modl;
       cout<<num<<endl;
   }
   return 0;
}
