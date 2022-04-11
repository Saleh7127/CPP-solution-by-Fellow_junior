#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int a[1000]={0},b,c=0,d=0,e=0,f,i,j,k,l;
    for(i=0;i<5;i++)
    {
        cin>>b;
        c+=b;
        a[b]++;
        if(a[b]==2)
        {
            d=max(2*b,d);
        }
         if(a[b]==3)
        {
            d=max(3*b,d);
        }

    }
    e=c-d;
    cout<<e<<endl;
    return 0;
}
