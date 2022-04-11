#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string a;
    ll b,c,d,e,f,i,j,k,l=100000000000;
    cin>>a;;

    for(char x='a' ; x<='z'; x++)
    {
        k=0;
        e=0;
        for(i=0; a[i]; i++)
        {
            if(a[i]==x)
            {
                k=0;
            }
            else k++;
            e=max(k,e);
        }
        l=min(l,e);
    }
    cout<<l+1<<endl;;

    return 0;
}
