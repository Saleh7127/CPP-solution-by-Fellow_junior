#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long a,b=0,c=0,d,i,j,k,l;
    cin>>a;
    for(i=1;i<=a;i++)
    {
        for(j=i+1;j<=a;j++)
        {
            if(i*j==a)
            {
                b=i;
                c=j;
            }
        }
    }
    if(b==0 && c==0) cout<<-1<<endl;
    else cout<<b<<c<<endl;
    return 0;
}
