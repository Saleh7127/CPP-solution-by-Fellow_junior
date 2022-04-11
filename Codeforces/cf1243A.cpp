#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,a[100000],b,c,d,e,i,j,k,l;
    cin>>t;
    while(t--)
    {
        cin>>b;
        c=0;
        for(i=0;i<b;i++)
        {
          cin>>a[i];
        }
        sort(a,a+b);
        d=b-1;
        while(a[d--]>c)
        {
            c++;
        }
        cout<<c<<endl;
    }
    return 0;
}
