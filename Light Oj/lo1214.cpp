#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int b,c,d,e,f,i,j,k,l;
    string a;
    cin>>b;
    for(i=1;i<=b;i++)
    {
        f=0;
        k=0;
        l=0;
        d=0;
        cin>>a>>c;
        d=a.size();
        if(a[0]=='-')
        {
            f=1;
        }
        if(c<0)
        {
            c=abs(c);
        }
        for(j=f;j<d;j++)
        {
            k=(a[j]-48)+k*10;
            k=k%c;
        }
        if(k!=0)
        {
            cout<<"Case "<<i<<": not divisible\n";
        }
        else
        {
            cout<<"Case "<<i<<": divisible\n";
        }
    }
    return 0;
}
