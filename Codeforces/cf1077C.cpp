#include <bits/stdc++.h>
using namespace std;
long long a[200005]= {0},c[200005]= {0};
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    long long d,e=0,f,i,j,k,l;
    cin>>d;
    for(i=1; i<=d; i++)
    {
        cin>>a[i];
        c[i]=a[i];
        e+=a[i];
    }
    sort(c+1,c+d+1);
    vector<long long>nn;
    for(i=1; i<=d; i++)
    {
        if(a[i]!=c[d])
        {
            if(e-a[i]-c[d]==c[d])
            {
                nn.push_back(i);
            }
        }
        else if(e-a[i]-c[d-1]==c[d-1])
        {
            nn.push_back(i);
        }
    }
    cout<<nn.size()<<endl;

    for(auto x:nn)
    {
        cout<<x<<" ";
    }
    cout<<endl;
    return 0;
}
