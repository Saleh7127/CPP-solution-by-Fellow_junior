#include<iostream>
using namespace std;
int main()
{
    int a[10000],b,c,d,e,f,i,j,k,l;
    cin>>k;
    while(k--)
    {
        c=0;
        cin>>b;
        for(i=0;i<b;i++)
        {
            cin>>a[i];
        }
        for(i=0;i<b;i++)
        {
            if(a[i]%2!=a[0]%2)
            {
                c++;
            }
        }
        if(c!=0) cout<<"NO\n";
        else cout<<"YES\n";
    }
    return 0;
}
