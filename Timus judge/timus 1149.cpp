#include <bits/stdc++.h>
using namespace std;
void recursive(int i)
{
    int j,k,l;
    for(j=1;j<=i;j++)
    {
        cout<<"sin("<<j;
        if(j==i)
        {
            for(k=0;k<i;k++)
            {
                cout<<")";
            }
            break;
        }
        else
        {
            if(j%2==1)
            {
                cout<<"-";
            }
            else cout<<"+";
        }
    }
}
int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);

   int n,c,i,j,k,l;
   cin>>n;
   for(i=1;i<n;i++)
   {
       cout<<"(";
   }
   c=n;
   for(i=1;i<=n;i++,c--)
   {
       recursive(i);
       if(i!=n)
       {
           cout<<"+"<<c<<")";
       }
   }
   cout<<"+1"<<endl;
   return 0;
}
