#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t,a,b,c,d,e,f,i,j,k,l;
    cin>>t;
    while(t--)
    {
        f=0;
        cin>>a>>b>>c;
        d=(a+b+c)/2;
        if(d<a || d<b)
        {
            if(d<a) f=c+1;
            else f=0;
        }
        else f=a+c-d;
        cout<<f<<endl;
    }
    return 0;
}


