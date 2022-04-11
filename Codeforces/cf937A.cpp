#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[10000]={0},b,c,d=0,e,f,i,j,l;
    cin>>b;
    for(i=0;i<b;i++)
    {
        cin>>c;
        if(a[c]==0 && c!=0)
        {
            d++;
            a[c]++;
        }
    }
    cout<<d<<endl;
}
