#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d,e,i,j,k;
    cin>>a>>b;
    for(i=1; ;i++)
    {
        c=a*i;
        if(c%10==b || c%10==0)
        {
            cout<<i<<endl;
            return 0;
        }
    }
    return 0;
}
