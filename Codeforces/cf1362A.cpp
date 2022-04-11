#include <bits/stdc++.h>
using namespace std;
#define test int t; cin>>t; while (t--)
#define ll long long int
#define pi acos(-1)
int main()
{
   test
   {
       ll a,c,d,e,f=0,i,j,k,l;
       cin>>a>>c;
        if(a>c)
        {
            d=a,e=c;
        }
        else
        {
            d=c,e=a;
        }
       if(a==c) cout<<0<<endl;
       else if(a%2==1 && c%2==1) cout<<-1<<endl;
       else if(d%e) cout<<-1<<endl;
       else
       {
          if(a>c)
          {
                while(d>=e)
                {
                    if(d/8>=e && d%8==0)
                    {
                        d=d/8;
                        f++;
                        if(d==e) break;
                    }
                    else if(d/4>=e && d%4==0)
                    {
                        d=d/4;
                        f++;
                        if(d==e) break;
                    }
                    else if(d/2>=e && d%2==0)
                    {
                        d=d/2;
                        f++;
                        if(d==e) break;
                    }
                    else break;
                }
                if(d!=e) cout<<-1<<endl;
                else cout<<f<<endl;
          }
          else if(c>a)
          {
              while(e<=d)
                {
                    if(e*8<=d)
                    {
                        e=e*8;
                        f++;
                        if(d==e) break;
                    }
                    else if(e*4<=d)
                    {
                        e=e*4;
                        f++;
                        if(d==e) break;
                    }
                    else if(e*2<=d)
                    {
                        e=e*2;
                        f++;
                        if(d==e) break;
                    }
                    else break;
                }
                if(d!=e) cout<<-1<<endl;
                else cout<<f<<endl;
          }

       }
   }
   return 0;
}
