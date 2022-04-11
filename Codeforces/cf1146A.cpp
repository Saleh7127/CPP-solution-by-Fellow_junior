#include<bits/stdc++.h>
using namespace std;
int main()
{
    int b=0,c=0,d=0,e,f,i,j,k;
    string a;
    cin>>a;
    b=a.size();
    for(i=0; i<b; i++)
    {
        if(a[i]=='a')
        {
            c++;
        }
    }
    if(c<=b/2)
    {
        d=(2*c)-1;
        cout<<d<<endl;
    }
    else
    {
        cout<<b<<endl;
    }
    return 0;
}
