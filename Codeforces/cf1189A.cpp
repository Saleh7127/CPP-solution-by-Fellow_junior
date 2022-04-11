#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    int b,c=0,d=0,e,i,j,k;
    cin>>b>>a;
    for(i=0; i<b; i++)
    {
        if(a[i]=='1')
            c++;
        else
            d++;
    }
    if(c==d)
    {
        cout<<"2\n";
        cout<<a[0]<<" ";
        for(i=1; i<b; i++)
        {
            cout<<a[i];
        }
    }
    else
    {
        cout<<"1\n";
        cout<<a;
    }
    cout<<endl;
    return 0;
}
