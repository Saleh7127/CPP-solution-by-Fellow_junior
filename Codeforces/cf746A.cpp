#include<bits/stdc++.h>
using namespace std;
int main()
{
    int b,c,d,e,f,i,j,k,l;
    string a;
    cin>>b>>a;
    if(b==2 || b==1)
    {
        cout<<a<<endl;
        return 0;
    }
    else if(b%2==0)
    {
        for(i=b-1;i>=0;i--)
        {
            if(i%2==0)
            {
                cout<<a[i];
            }
        }
        for(i=0;i<b;i++)
        {
            if(i%2!=0)
            {
                cout<<a[i];
            }
        }
    }
    else
    {
        for(i=b-1;i>=0;i--)
        {
            if(i%2!=0)
            {
                cout<<a[i];
            }
        }
        for(i=0;i<b;i++)
        {
            if(i%2==0)
            {
                cout<<a[i];
            }
        }
    }
}
