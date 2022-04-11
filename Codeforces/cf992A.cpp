#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,i,j,k,l;
    cin>>a;
    set<int>c;
    while(a--)
    {
        cin>>b;
        if(b!=0)
        {
            c.insert(b);
        }
    }
    k=c.size();
    cout<<k<<endl;
    return 0;
}


