#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);

   double cow,car,show,total,goru,gari,gari1,gari2,ans;

   while(cin>>cow>>car>>show)
   {

///       two ways to get a car:
///       either pick a cow first; ->goru
///       then switch to a car; ->gari
///       or pick a car first; ->gari1
///       and then switch to another car; ->gari2

       total=car+cow;

       goru=cow/total;   ///pick a cow first

       gari=car/total;   ///switch to a car;

       gari1=car/(total-1.0-show);   ///pick a car first;

       gari2=(car-1.0)/(total-1.0-show);   ///switch to another car

       ans=goru*gari1+gari*gari2;

       cout<<fixed<<setprecision(5)<<ans<<endl;

   }


   return 0;
}
