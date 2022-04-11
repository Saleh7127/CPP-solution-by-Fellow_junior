#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long a[100000],b,c,d,e,i,j,k,l;
    cin>>b;
    for(j=1; j<=b; j++)
    {

        for(i=0; i<3; i++)
            cin>>a[i];
        sort(a,a+3);
        cout<<"Case "<<j<<": "<<a[1]<<endl;
    }
    return 0;
}
