#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);


   test
   {

       string a;
       deque<ll>q;

       ll n,m,i,j,k,l;

       cin>>n>>m;

       cout<<"Case "<<cs<<":"<<endl;

       while(m--)
       {
           cin>>a;
           if((a=="pushLeft" || a=="pushRight") && q.size()>=n)
           {
               cin>>k;
               cout<<"The queue is full"<<endl;
           }
           else if((a=="popLeft" || a=="popRight") && q.size()==0)
           {
               cout<<"The queue is empty"<<endl;
           }
           else if(a=="pushLeft")
           {
               cin>>k;
               q.push_front(k);
               cout<<"Pushed in left: "<<k<<endl;
           }
           else if(a=="pushRight")
           {
               cin>>k;
               q.push_back(k);
               cout<<"Pushed in right: "<<k<<endl;
           }
           else if(a=="popLeft")
           {
               k=q.front();
               cout<<"Popped from left: "<<k<<endl;
               q.pop_front();
           }
           else if(a=="popRight")
           {
               k=q.back();
               cout<<"Popped from right: "<<k<<endl;
               q.pop_back();
           }
       }
   }

   return 0;
}
