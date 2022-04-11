#include<bits/stdc++.h>
using namespace std;
int main ()
{
    string a;
    int i,j,k,l,b,c,d,e,f;
    cin>>a;
    l=a.size();
    if(l==1)
    {
        cout<<a<<endl;
        return 0;
    }
    if(l%2==0)
    {
        b=l/2-1;
        c=l/2;
        for(i=b,j=c; i>0,j<l; i--,j++)
        {
            cout<<a[i]<<a[j];
        }
    }
    else
    {
        d=l/2;
        cout<<a[d];
        b=l/2-1;
        c=l/2+1;
        for(i=b,j=c; i>0,j<l; i--,j++)
        {
            cout<<a[j]<<a[i];
        }
    }
    return 0;
}

