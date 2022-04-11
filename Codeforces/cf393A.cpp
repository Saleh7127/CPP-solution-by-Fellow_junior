#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    int b,c,d,n=0,i=0,e=0,t=0,j,k,l;
    cin>>a;
    b=a.size();
    for(j=0;j<b;j++)
    {
        if(a[j]=='n') n++;
        if(a[j]=='e') e++;
        if(a[j]=='i') i++;
        if(a[j]=='t') t++;
    }
    e=e/3;
    n=(n-1)/2;
    k=min(n,min(e,min(t,i)));
    cout<<k<<endl;
}
