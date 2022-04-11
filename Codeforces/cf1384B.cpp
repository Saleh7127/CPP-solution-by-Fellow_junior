#include <bits/stdc++.h>
using namespace std;
#define test int t; cin>>t; while (t--)
#define ll long long int
#define fellow_junior  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
    fellow_junior

    test
    {
        ll c,d[200000],e,f,i,j,l;
        string a="";
        cin>>c;
        for(i=1;i<=c;i++)
        {
            cin>>d[i];
        }
        for(i=1;i<=100;i++)
        {
            a+="a";
        }
        cout<<a<<endl;
        for(i=1;i<=c;i++)
        {
            if(a[d[i]]=='a')
            {
                a[d[i]]='c';
            }
            else
            {
                a[d[i]]='a';
            }
            cout<<a<<endl;
        }
    }
    return 0;
}
