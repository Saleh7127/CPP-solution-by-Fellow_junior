#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b=1,c,d,e,i,j,k;
    cin>>a;
    for(i=1;i<=a;i++)
    {
        if(i==13)
        {
            b=b*2-100;
        }
        else b*=2;
    }
    cout<<b<<endl;
    return 0;
}
