#include<bits/stdc++.h>
using namespace std;
int main()
{
    int b,c,d,e,f,i,j,k,l;
    string a;
    cin>>b;
    while(b--)
    {
        d=0;
        e=0;
        f=0;
        cin>>a;
        c=a.size();
        for(i=0; i<c; i++)
        {
          if(a[i]=='1')
          {
              break;
          }
        }
        for(j=c; j>=0; j--)
        {
          if(a[j]=='1')
          {
              break;
          }
        }
        for(;i<j;i++)
        {
            if(a[i]=='0')
            {
                f++;
            }
        }
        cout<<f<<endl;
    }
}
