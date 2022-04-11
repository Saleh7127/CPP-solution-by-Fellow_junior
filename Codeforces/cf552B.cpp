#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b=0,c,d,e,f,i,j,k,l;
    cin>>a;
    for(i=1; i<=a; i*=10)
    {
        b=b+(a-i)+1;
    }
    cout<<b<<endl;
    return 0;
}
