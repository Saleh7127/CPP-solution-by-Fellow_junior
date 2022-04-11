#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d=0,e,i,j,k,l;
    cin>>a;
    while(a--)
    {
        cin>>b>>c;
        if(b!=c)
        {
            d++;
        }
    }
    if(d!=0) cout<<"Happy Alex\n";
    else cout<<"Poor Alex\n";

    return 0;
}
