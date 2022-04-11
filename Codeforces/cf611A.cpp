#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int a,b,i,j,k,l;
    char d[1000],c[1000];
    cin>>a;
    cin>>d>>c;
    if(c[0]=='w')
    {
       if(a<=4 || a==7) cout<<52<<endl;
       else cout<<53<<endl;
    }
    if(c[0]=='m')
    {
        if(a<=29) cout<<12<<endl;
        if(a==30) cout<<11<<endl;
        if(a==31) cout<<7<<endl;
    }
    return 0;
}
