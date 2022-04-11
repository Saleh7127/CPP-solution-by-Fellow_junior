#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,a,b,c=0,d=0,e,f,i,j,k,l;
    cin>>t>>a;
    while(t--)
    {
        cin>>b;
        c+=b;
    }
    if(c==0)
    {
        cout<<"0\n";
        return 0;
    }
    c=abs(c);
    while(c>0)
    {
        c-=a;
        d++;
    }
    cout<<d<<endl;
    return 0;
}
