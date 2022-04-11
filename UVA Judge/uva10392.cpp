#include <bits/stdc++.h>
using namespace std;
#define test int t; cin>>t; while (t--)
#define ll long long int
#define fellow_junior  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
   fellow_junior

   ll a,c,d,e,f,i;
   while(cin>>a && a>0)
   {
       while(a%2==0)
       {
           cout<<"    2"<<endl;
           a/=2;
       }
       for(i=3;i*i<=a;i+=2)
       {
           while(a%i==0)
           {
                cout<<"    "<<i<<endl;
                a/=i;
           }
       }
       if(a>1) cout<<"    "<<a<<endl<<endl;
   }


   return 0;
}
