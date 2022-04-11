#include<bits/stdc++.h>
using namespace std;
long long a[1000000],b,c,d,e,f,i,j,t,k,l;
int main()
{
    cin>>t;
    while(t--)
    {
        cin>>b;
        for(i=0; i<b; i++)
        {
            cin>>a[i];
        }
        sort(a,a+b);
        c=b/2;
        if(b%2!=0)
        {
            cout<<a[c]<<" ";
            c++;
        }
        for(i=c; i<b; i++)
        {
            printf("%lld %lld ",a[i],a[b-i-1]);
        }
        cout<<endl;
    }
    return 0;
}
