#include<bits/stdc++.h>
using namespace std;
int main()
{
    int b,c=0,d=0,e,f,i,j,k;
    string a;
    cin>>b;
    cin>>a;
    for(i=0;i<b-1;i++)
    {
        if(a[i]=='S' && a[i+1]=='F')
        {
            c++;
        }
        else if(a[i]=='F' && a[i+1]=='S')
        {
            d++;
        }
    }
    if(c>d) cout<<"YES\n";
    else cout<<"NO\n";

    return 0;
}
