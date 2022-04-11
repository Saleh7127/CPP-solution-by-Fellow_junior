#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d=0,e,i,j,k;
    cin>>a>>b>>c;
    for(i=1;i<=c;i++)
    {
        if(i%a==0 && i%b==0)
        {
            d++;
        }
    }
     cout<<d<<endl;
    return 0;
}
