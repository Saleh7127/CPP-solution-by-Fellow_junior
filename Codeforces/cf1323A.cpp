#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int a,b,c,d,e,f,i,j,k,l,t;
    cin>>t;
    while(t--)
    {
        c=0;
        cin>>b;
        for(i=1;i<=b;i++)
        {
            cin>>a;
            if(a%2==0)
            {
                c=i;
            }
        }
        if(c==0 && b==1)
        {
            cout<<"-1\n";
        }
        else if(c!=0)
        {
            cout<<"1\n"<<c<<endl;
        }
        else
        {
            cout<<"2\n"<<"1 2"<<endl;
        }
    }
    return 0;
}
