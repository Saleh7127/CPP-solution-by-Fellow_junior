#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long a[100000],b,c,d,e,i,j,k,l;
    while(1)
    {
        c=0;
        d=0;
        for(i=0;i<3;i++)
        {
            cin>>a[i];
        }
        if(a[0]==0 && a[1]==0 && a[2]==0) break;
        sort(a,a+3);
        c=(a[0]*a[0])+(a[1]*a[1]);
        d=a[2]*a[2];
        if(c==d)
        {
            cout<<"right\n";
        }
        else cout<<"wrong\n";
    }
    return 0;
}
