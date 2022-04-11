#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[100];
    int b=0,c,d,e;
    for(e=0;e<5;e++)
    {
        cin>>a[e];
        b+=a[e];
    }
    if(b!=0 && b%5==0) cout<<b/5<<endl;
    else cout<<"-1\n";

    return 0;
}
