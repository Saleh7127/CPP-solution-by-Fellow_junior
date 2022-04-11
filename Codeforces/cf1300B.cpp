#include<bits/stdc++.h>
using namespace std;
int main()
{
    int b,c,d,e,i,j,k,l;
    cin>>b;
    while(b--)
    {
        cin>>c;
        int a[2*c];
        for(i=0;i<2*c;i++)
        {
            cin>>a[i];
        }
        sort(a,a+2*c);
        cout<<a[c]-a[c-1]<<endl;
    }
    return 0;
}
