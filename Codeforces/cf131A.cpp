#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    int b=0,c,i,j,k,l;
    cin>>a;
    l= a.size();
    for(j=1; j<l; j++)
    {
        if(a[j]>='A' && a[j]<='Z')
        {
            b++;
        }
    }
    if(b==l-1)
    {
        for(i=0; i<l; i++)
        {
            if(a[i]>='A' && a[i]<='Z')
            {
                a[i]=a[i]+32;
            }
            else if(a[i]>='a' && a[i]<='z')
            {
                a[i]=a[i]-32;
            }
        }
    }
    cout<<a<<endl;

    return 0;
}
