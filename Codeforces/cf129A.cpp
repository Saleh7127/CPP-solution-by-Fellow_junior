#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int a[100000],b,c=0,d=0,e,f,i,j,k,l;
    cin>>b;
    for(i=0;i<b;i++)
    {
        cin>>a[i];
        if(a[i]%2!=0) c++;
        else d++;
    }
    if(c%2!=0)
    {
        cout<<c<<endl;
    }
    else cout<<d<<endl;
    return 0;
}
