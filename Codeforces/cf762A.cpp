#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long a,b,i,j,k,l;
    cin>>a>>b;
    vector<long long>c;
    for(i=1;i<=sqrt(a);i++)
    {
        if(a%i==0)
        {
            c.push_back(i);
            if(i!=sqrt(a))
            {
                c.push_back(a/i);
            }
        }
    }
    sort(c.begin(),c.end());
    if(b>c.size())
    {
        cout<<-1<<endl;
    }
    else
    {
        cout<<c[b-1]<<endl;
    }
    return 0;
}
