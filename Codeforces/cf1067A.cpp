#include <bits/stdc++.h>
using namespace std;
int main()
{
    int b,c,d,e,i,j,k,l;
    string a;
    cin>>b;
    cin>>a;
    l=b-1;
    for(i=0;i<b;i++)
    {
        if(a[i]>a[i+1])
        {
            l=i;
            break;
        }
    }
    for(i=0;i<b;i++)
    {
        if(i==l) continue;
        else cout<<a[i];
    }
    cout<<endl;

    return 0;
}
