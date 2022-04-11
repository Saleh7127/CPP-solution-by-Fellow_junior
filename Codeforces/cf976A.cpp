#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    int b,c=0,d=0,e,i,j,k,l;
    cin>>b;
    cin>>a;
    for(i=0;i<b;i++)
    {
        if(a[i]=='0') c++;
        else d++;
    }
    if(d>0) cout<<1;
    for(j=0;j<c;j++)
    {
        cout<<0;
    }
    cout<<endl;
    return 0;
}
