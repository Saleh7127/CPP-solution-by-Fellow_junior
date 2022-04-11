#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a,b;
    int i,j,k,l;
    cin>>a>>b;
    cout<<a[0];
    for(i=1;i<a.size();i++)
    {
        if(a[i]<b[0])
        {
            cout<<a[i];
        }
        else break;
    }
    cout<<b[0]<<"\n";
    return 0;
}
