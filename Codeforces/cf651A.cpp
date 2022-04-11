#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c=0,d,e,i,j,k,l;
    cin>>a>>b;
    while(a!=0 && b!=0)
    {
        if(a>b)
        {
            b+=1;
            a-=2;
        }
        else
        {
            b-=2;
            a+=1;
        }
        if(a<0 || b<0)
        {
            break;
        }
        c++;
    }
    cout<<c<<endl;
    return 0;
}
