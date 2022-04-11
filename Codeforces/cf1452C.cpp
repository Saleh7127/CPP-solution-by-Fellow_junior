#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);


    int t;
    cin>>t;
    while(t--)
    {
        string s;
        long long i,j,a=0,b=0,l,ans=0;
        cin>>s;
        l=s.size();
        for(i=0; i<l; i++)
        {
            if(s[i]=='[')
            {
                a++;
            }
            else if(s[i]==']' && a>0)
            {
                a--;
                ans++;
            }
            if(s[i]=='(')
            {
                b++;
            }
            else if(s[i]==')' && b>0)
            {
                b--;
                ans++;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}
