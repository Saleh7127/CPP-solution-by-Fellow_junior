#include<bits/stdc++.h>
using namespace std;
int main ()
{
    string a;
    int b,c=0,d,e,f,i,j,k,l;
    cin>>a;
    l=a.size();
    for(i=0;i<l;i++)
    {
        if(a[i]=='W' && a[i+1]=='U' && a[i+2]=='B')
        {
            i=i+2;
            cout<<" ";
        }
        else
        {
            cout<<a[i];
        }
    }
    return 0;
}
