#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c=0,d=0,e=0,i,j,k=0,l;
    cin>>a>>b;
    c=a*2;
    d=a*5;
    e=a*8;
    k=k+(c/b);
    if(c%b!=0)
        k++;
    k=k+(d/b);
    if(d%b!=0)
        k++;
    k=k+(e/b);
    if(e%b!=0)
        k++;
    cout<<k<<endl;
    return 0;
}
