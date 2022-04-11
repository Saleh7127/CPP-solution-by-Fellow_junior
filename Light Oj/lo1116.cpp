#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b,c,t,d,e,f,i,j,k,l;
    cin>>t;
    for(k=1;k<=t;k++)
    {
        d=0;
        cin>>a;
        if(a%2!=0)
        {
            cout<<"Case "<<k<<": Impossible\n";
        }
        else
        {
           for(i=2;i<=a/2;i++)
           {
               if(a%i==0)
               {
                   c=a/i;
               }
               if(c%2==1)
               {
                   d=1;
                   break;
               }
           }
           if(d==1)
           {
               cout<<"Case "<<k<<": "<<c<<" "<<i<<endl;
           }
           else
           {
               cout<<"Case "<<k<<": Impossible\n";
           }
        }
    }
    return 0;
}
