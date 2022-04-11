#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[111111],b,c=0,d,e,f,i,j,k,l;
    cin>>b;
    for(i=0;i<b;i++)
    {
        cin>>d;
        a[d]++;
        if(a[d]>1 || d>b)
        {
            c++;
        }
    }

    cout<<c<<endl;
    return 0;
}

