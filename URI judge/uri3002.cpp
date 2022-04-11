#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b,c=0,d,e,f,i,j,k,l;
    cin>>a;
    if(a==2)
    {
        cout<<1<<endl;
    }
    else if(a%2==0)
    {
        cout<<2<<endl;
    }
    else if(a%3==0)
    {
        cout<<3<<endl;
    }
    else
    {
        for(i=3;i<=a/2;i+=2)
        {
            if(a%i==0)
            {
                c=i;
            }
        }
       if(c!=0) cout<<c<<endl;
       else cout<<a<<endl;
    }
    return 0;
}
