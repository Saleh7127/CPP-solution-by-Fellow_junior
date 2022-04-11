#include<bits/stdc++.h>
using namespace std;
int main()
{

    int b,c=0,d=0,e=0,i,j,k,l;
    cin>>b;
    string a;
    cin>>a;
    d=b/11;
    for(i=0;i<b;i++)
    {
        if(a[i]=='8')
        {
            c++;
        }
    }
    if(c==0 || d==0) cout<<0<<endl;
    else
    {
        e=min(c,d);
        cout<<e<<endl;
    }
    return 0;
}
