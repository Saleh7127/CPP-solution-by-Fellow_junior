#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[8][8]= {2,3,4,4,4,4,3,2,
                  3,4,6,6,6,6,4,3,
                  4,6,8,8,8,8,6,4,
                  4,6,8,8,8,8,6,4,
                  4,6,8,8,8,8,6,4,
                  4,6,8,8,8,8,6,4,
                  3,4,6,6,6,6,4,3,
                  2,3,4,4,4,4,3,2};

    int b,c,d,e,f;
    char x,y;
    cin>>b;
    while(b--)
    {
        cin>>x>>y;
        c=x-'a'+1;
        d=y-'0';
        cout<<a[c-1][d-1]<<endl;
    }
    return 0;
}
