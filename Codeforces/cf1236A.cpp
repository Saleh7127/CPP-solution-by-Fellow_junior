#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d,e,f,i,j,k,l;
    cin>>d;
    while(d--)
    {
        e=0;
        cin>>a>>b>>c;
        while(b>=1 && c>=2)
        {
            b-=1;
            c-=2;
            e+=3;
        }
        while(a>=1 && b>=2)
        {
            a-=1;
            b-=2;
            e+=3;
        }
        cout<<e<<endl;
    }
    return 0;
}
