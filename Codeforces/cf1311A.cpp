#include<bits/stdc++.h>
using namespace std;
int c=0;
int main()
{
    int a,b,d,e,f,i,j,k,l,t;
    cin>>t;
    while(t--)
    {
        cin>>a>>b;
        c=abs(a-b);
        if(a==b)
        {
            cout<<"0\n";
        }
        else if(a<b)
        {
            if(c%2==1)
            {
                cout<<"1\n";
            }
            else
            {
                cout<<"2\n";
            }
        }
        else if(a>b)
        {
            if(c%2==1)
            {
                cout<<"2\n";
            }
            else
            {
                cout<<"1\n";
            }
        }
    }
    return 0;
}
