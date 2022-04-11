#include <bits/stdc++.h>
using namespace std;
int n,m;
string rule,a[10000],ans[10000];

void backtrack(int pos)
{
    if(pos==rule.size())
    {
        for(int i=0;i<pos;i++)
        {
            cout<<ans[i];
        }
        cout<<endl;
        return ;
    }
    else
    {
        if(rule[pos]=='#')
        {
            for(int i=0;i<n;i++)
            {
                ans[pos]=a[i];

                backtrack(pos+1);
            }
        }
        else
        {
            for(int i=0;i<10;i++)
            {
                ans[pos]=i+'0';

                backtrack(pos+1);
            }
        }

    }

}

int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);

   while(cin>>n)
   {

       for(int i=0;i<n;i++)
       {
           cin>>a[i];
       }
       cin>>m;
       cout<<"--"<<endl;
       while(m--)
       {
           cin>>rule;
           backtrack(0);
       }
   }
   return 0;
}
