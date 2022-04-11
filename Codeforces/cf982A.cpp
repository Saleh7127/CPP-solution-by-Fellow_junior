#include<bits/stdc++.h>
using namespace std;
int main()
{
    int b,c=1,d,e,f,i,j,k,l;
    string a;
    cin>>b;
    cin>>a;
    if((b==1 && a[0]=='0')|| (a[0]=='0' && a[1]=='0') || (a[b-1]=='0' && a[b-2]=='0'))
    {
        cout<<"No\n";
        return 0;
    }
    for(i=0; i<b-1; i++)
    {
        if((a[i]=='1' && a[i]==a[i+1])||(a[i]=='0'&&a[i]==a[i-1] && a[i]==a[i+1]))
        {
            cout<<"No\n";
            return 0;
        }
    }
    cout<<"Yes\n";
    return 0;
}
