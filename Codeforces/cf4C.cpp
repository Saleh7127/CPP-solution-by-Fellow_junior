#include<bits/stdc++.h>
using namespace std;
int main()
{
    int b,d,e,f,i,j,k,l;
    cin>>b;
    map<string,int>a;
    while(b--)
    {
        string c;
        cin>>c;
        if(a[c]==0)
        {
            cout<<"OK\n";
            a[c]++;
        }
        else
        {
            cout<<c<<a[c]<<endl;
            a[c]++;
        }
    }
    return 0;
}
