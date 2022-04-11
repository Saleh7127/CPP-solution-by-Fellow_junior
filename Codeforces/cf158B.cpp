#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[100]={0},b,c,d,e,f,i,j,k,l;
    cin>>b;
    while(b--)
    {
        cin>>c;
        a[c]++;
    }
    d=a[1]-a[3];
    e=a[4]+a[3]+(a[2]*2+max(d,0)+3)/4;
    cout<<e<<endl;
    return 0;
}
