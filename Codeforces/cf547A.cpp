#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c=0,d,e,i,j,k,l;
    cin>>a>>b;
    if(b%a!=0)
    {
        cout<<"-1\n";
        return 0;
    }
    else
    {
        b/=a;
        while(b%2==0)
        {
            c++;
            b/=2;
        }
        while(b%3==0)
        {
            c++;
            b/=3;
        }
        if(b>1) cout<<"-1\n";
        else  cout<<c<<endl;
    }
    return 0;
}
