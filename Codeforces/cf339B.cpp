#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b,c,d=0,e=0,f,i,j,k,l;
    cin>>a>>b;
    for(i=0;i<b;i++)
    {
        cin>>c;
        if(c>=d)
        {
            e+=(c-d);
        }
        else
        {
            e+=(a+c-d);
        }
        d=c;
    }
    cout<<e-1<<endl;
}
