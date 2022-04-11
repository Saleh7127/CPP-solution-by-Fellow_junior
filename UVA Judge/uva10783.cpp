#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d,e,f,i,j,k,l;
    cin>>b;
    for(i=1;i<=b;i++)
    {
        e=0;
        cin>>c>>d;
        for(j=c;j<=d;j++)
        {
          if(j%2==1)
          {
              e+=j;
          }
        }
        cout<<"Case "<<i<<": "<<e<<endl;
    }
    return 0;
}
