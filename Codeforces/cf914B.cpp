#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long a[100005]={0},b,c,d=0,e,f,i,j,k,l;
    cin>>b;
    for(i=0;i<b;i++)
    {
        cin>>c;
        a[c]++;
    }
    for(i=1;i<100005;i++)
    {
        if(a[i]%2)
            d=1;
    }
    if(d) cout<<"Conan\n";
    else cout<<"Agasa\n";
    return 0;
}
