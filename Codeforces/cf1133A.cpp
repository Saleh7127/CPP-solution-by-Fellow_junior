#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,d,e,f,g,h,i,j,k,l;
    char c[100];
    cin>>a>>c[0]>>b;
    cin>>d>>c[1]>>e;
    f=(a*60)+b+(d*60)+e;
    g=f/2;
    h=g/60;
    i=g%60;
    if(h<10 && i<10)
    {
        cout<<"0"<<h<<":"<<"0"<<i<<endl;
    }
    else if(h>=10 && i>=10)
    {
        cout<<h<<":"<<i<<endl;
    }
    else if(h<10 && i>=10)
    {
        cout<<"0"<<h<<":"<<i<<endl;
    }
    else  if(h>=10 && i<10)
    {
        cout<<h<<":"<<"0"<<i<<endl;
    }
    return 0;
}
