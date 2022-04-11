#include <bits/stdc++.h>
using namespace std;
int main()
{
    char a[100000],b[100000],*x;
    int c,d,e,f,i,j,k,l;
    cin>>c;
    while(c--)
    {
        cin>>b;
        cin>>d;
        while(d--)
        {
            cin>>a;
            if(x==strstr(b,a))
                cout<<"YES\n";
            else
                cout<<"NO\n";
        }
    }
    return 0;
}
