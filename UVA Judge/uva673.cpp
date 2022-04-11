#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define Faster  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
    Faster
    ll t;
    cin>>t;
    cin.ignore();
    while (t--)
    {
        string a;
        getline(cin,a);
        stack<char>x;
        ll l=a.size();
        for(ll i=0; i<l; i++)
        {
            if(x.empty()==0 && x.top()=='(' && a[i]==')')
            {
                x.pop();
            }
            else if(x.empty()==0 && x.top()=='[' && a[i]==']')
            {
                x.pop();
            }
            else x.push(a[i]);
        }
        if(x.empty()==1) printf("Yes\n");
        else printf("No\n");
    }
    return 0;
}
