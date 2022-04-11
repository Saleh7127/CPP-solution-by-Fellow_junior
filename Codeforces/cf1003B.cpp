#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int a,c,d,e,x,i,j,k,l;
    char n,m;
    cin>>a>>c>>x;
    d=a+c;
    if(a>c)
    {
        n='0';
        m='1';
    }
    else
    {
        n='1';
        m='0';
        swap(a,c);
    }
    for(i=0; i<x/2; i++)
    {
        cout<<n<<m;
        a--;
        c--;
    }
    if(x%2==0)
    {
        while(c--)
        {
            cout<<m;
        }
        while(a--)
        {
            cout<<n;
        }
    }
    else
    {
        while(a--)
        {
            cout<<n;
        }
        while(c--)
        {
            cout<<m;
        }
    }
    return 0;
}
