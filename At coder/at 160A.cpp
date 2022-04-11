#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    int i,j,k,l;
    cin>>a;
    l=a.size();
    if(l==6 && a[2]==a[3] &&  a[4]==a[5])
    {
        cout<<"Yes\n";
    }
    else cout<<"No\n";
    return 0;
}
