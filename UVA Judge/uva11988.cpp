#include <bits/stdc++.h>
using namespace std;
#define test int t; cin>>t; while (t--)
#define ll long long int
#define fellow_junior  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
    fellow_junior
    string a;
    ll i,j,k,l,e,f;
    while(cin>>a)
    {
        string c="";
        stack<string>beiju;
        l=a.size();
        for( i=0; i<l; )
        {
            if(a[i]=='[')
            {
                i++;
                string d="";
                while(1)
                {
                    if(a[i]!='[' && a[i]!=']' && i<l)
                    {
                        d+=a[i];
                        i++;
                    }
                    else break;
                }
                if(d.size()>0) beiju.push(d);
            }
            else if(a[i]==']')
            {
                i++;
            }
            else c+=a[i],i++;
        }
        while(beiju.empty()==0)
        {
            cout<<beiju.top();
            beiju.pop();
        }
        cout<<c<<endl;
    }
    return 0;
}
