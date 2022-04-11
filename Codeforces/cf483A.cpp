#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll a,b,c,d,e,f,i,j,k,l;
    cin>>a>>b;
    if(b-a<=1) cout<<-1<<endl;
    else if(a%2==0)
    {
        printf("%lld %lld %lld\n",a,a+1,a+2);
    }
    else if(a%2!=0 && a+3<=b)
    {
         printf("%lld %lld %lld\n",a+1,a+2,a+3);
    }
    else cout<<-1<<endl;
    return 0;
}
