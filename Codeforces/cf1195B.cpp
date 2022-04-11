#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long a,b,c,d,e,f,i,j,k,l;
    cin>>a>>b;
    for(i=1;i<=a;i++)
    {
        c=i*(i+1)/2;
        if(c-(a-i)==b)
        {
            cout<<a-i<<endl;
            return 0;
        }
    }
    return 0;
}
