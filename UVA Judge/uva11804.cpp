#include <bits/stdc++.h>
using namespace std;
struct inform
{
    string name;
    int attack,defend;

} a[10];

bool cmprpwr(inform a,inform c)
{
    if(a.attack > c.attack) return 1;

    else if(a.attack < c.attack) return 0;

    if(a.defend < c.defend) return 1;

    else if(a.defend > c.defend) return 0;

    if(a.name < c.name) return 1;

    else return 0;
}

bool namecmpr(inform a,inform c)
{
    return a.name<c.name;
}

int main()
{
   int t,i,j,k,l;
   cin>>t;
   for(k=1;k<=t;k++)
   {
       for(i=0;i<10;i++)
       {
           cin>>a[i].name>>a[i].attack>>a[i].defend;
       }
       sort(a,a+10,cmprpwr);
       sort(a,a+5,namecmpr);
       sort(a+5,a+10,namecmpr);
       printf("Case %d:\n(",k);
       cout<<a[0].name;
       for(i=1;i<5;i++)
       {
           cout<<", "<<a[i].name;
       }
       printf(")\n(");
       cout<<a[5].name;
       for(i=6;i<10;i++)
       {
           cout<<", "<<a[i].name;
       }
       printf(")\n");
   }
   return 0;
}
