#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a=2,c,d,e,f,i,j,k,l,n;
    vector<int>x;
    cin>>n>>k;
    while(a<=n && k)
    {
        if(k==1) a=n;
        if(n%a==0)
        {
            n=n/a;
            x.push_back(a);
            k--;
        }
        else a++;
    }
    if(k==0)
    {
        for(i=0;i<x.size();i++)
        {
            cout<<x[i]<<" ";
        }
        cout<<endl;
    }
    else cout<<-1<<endl;
    return 0;
}
