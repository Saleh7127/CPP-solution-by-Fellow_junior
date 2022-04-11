#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[100000],b,c=0,d,e,f,i,j,k,l;
    cin>>b;
    for(i=0;i<b;i++)
    {
        cin>>a[i];
    }
    sort(a,a+b,greater<int>());
    for(i=0;i<b;i+=2)
    {
      c=c+(a[i]-a[i+1]);
    }
    cout<<c<<endl;
    return 0;
}
