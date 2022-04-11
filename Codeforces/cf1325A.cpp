#include<bits/stdc++.h>
using namespace std;
int main()
{
    int b,t,c,d,e,f,i,j,k,l;
    cin>>t;
    while(t--)
    {
        c=1;
        cin>>b;
        int a[b+5];
        for(i=0;i<b;i++)
        {
            cin>>a[i];
        }
        sort(a,a+b);
        for(i=0;i<b-1;i++)
        {
            if(a[i]!=a[i+1])
            {
                c++;
            }
        }
        cout<<c<<endl;
    }
    return 0;
}
