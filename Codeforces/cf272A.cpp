#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c=0,d,e=0,f,i,j,k;
    cin>>b;
    d=b+1;
    while(b--)
    {
        cin>>a;
        c+=a;
    }
    for(i=1;i<=5;i++)
    {
        if((c+i)%d!=1)
        {
            e++;
        }
    }
    cout<<e<<endl;
    return 0;
}
