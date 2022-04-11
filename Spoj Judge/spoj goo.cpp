#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b,c,d,e,f,i,j,k,l;
    cin>>a;
    while(a--)
    {
        cin>>b;
        c=pow(2,b-1);
        d=c*(b-1);
        d=d/2;
        d+=c;
        cout<<c<<" "<<d<<endl;

    }
    return 0;
}
