#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long a,b,c,d,e=0,f=0,i,j,k=0,l;
    cin>>a>>b;
    cin>>c>>d;
    for(; b<100000;)
    {
        if(b==d)
        {
            cout<<b<<endl;
            return 0;
        }
        else if(b<d) b+=a;
        else d+=c;
    }
    cout<<-1<<endl;
    return 0;
}

