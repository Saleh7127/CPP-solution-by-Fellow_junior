#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int a,b,c,d,e,f,i,j,k;
    cin>>a;
    for(i=0;i<a;i++)
    {
        if(pow(2,i)==a)
        {
            cout<<"YES\n";
            return 0;
        }
    }
    cout<<"NO\n";
    return 0;
}
