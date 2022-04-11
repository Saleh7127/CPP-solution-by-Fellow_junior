#include<bits/stdc++.h>
using namespace std;
int main()
{
    int p,y,a=0,b,c,d,f,e,i,j,k,l;
    cin>>p>>y;
    for(i=y;i>p;i--)
    {
        a=0;
        for(j=2;j*j<=i && j<=p;j++)
        {
            if(i%j==0)
            {
                a=1;
                break;
            }
        }
        if(a==0)
        {
            cout<<i<<endl;
            return 0;
        }
    }
    cout<<-1<<endl;
    return 0;
}
