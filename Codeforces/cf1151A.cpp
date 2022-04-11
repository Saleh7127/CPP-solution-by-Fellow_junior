#include<bits/stdc++.h>
using namespace std;
int chota(int m)
{
    if(m>(26-m))
        return 26-m;
    else
        return m;
}
int main()
{
    int b,c=0,d=0,e=0,f=0,i,j,k=0,l=1000000;
    string a;
    cin>>b;
    cin>>a;
    for(i=0; i<b-3; i++)
    {
        c=chota(abs(a[i]-'A'));
        d=chota(abs(a[i+1]-'C'));
        e=chota(abs(a[i+2]-'T'));
        f=chota(abs(a[i+3]-'G'));
        k=c+d+e+f;
        if(l>k)
        {
            l=k;
        }
    }
    cout<<l<<endl;
    return 0;
}
