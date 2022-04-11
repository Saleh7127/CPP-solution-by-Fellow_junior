#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a[10000];
    int b,c,d,e,f,i,k,l;
    cin>>b;
    for(i=0;i<b;i++)
    {
        cin>>a[i];
    }    sort(a,a+b);
    c=b/2;
    cout<<a[c]<<endl;
    return 0;
}
