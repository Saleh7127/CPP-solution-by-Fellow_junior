#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long a,b,c,d,e,f,i,j,k,l;
    cin>>a;
    for(i=1;i<=a;i++)
    {
        c=0;
        cin>>b;
        while(b!=0)
        {
            if(b%2==1) c++;
            b=b/2;
        }
        if(c%2==0) cout<<"Case "<<i<<": even\n";
        else cout<<"Case "<<i<<": odd\n";
    }
    return 0;
}
