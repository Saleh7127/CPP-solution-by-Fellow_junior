#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d,e,f,i,j,k;
    cin>>a;
    for(i=1; i<=a; i++)
    {
        cin>>b;
        if(b%2!=0)
        {
            cout<<"First";
            return 0;
        }
    }
    cout<<"Second";
    return 0;
}
