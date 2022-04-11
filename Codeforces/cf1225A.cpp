#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d,e,i,j,k,l;
    cin>>a>>b;
    if(b==a+1)
    {
        d=100*b;
        e=d-1;
        cout<<e<<" "<<d<<endl;
    }
    else if(a==b)
    {
        d=b*100;
        e=d+1;
        cout<<d<<" "<<e<<endl;
    }
    else if(a==9 && b==1)
    {
        d=a;
        e=b*10;
        cout<<d<<" "<<e<<endl;
    }
    else
    {
        cout<<"-1\n";
    }
    return 0;
}
