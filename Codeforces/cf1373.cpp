#include <bits/stdc++.h>
using namespace std;
#define test int t; cin>>t; while (t--)
#define ll long long int
int main()
{
    test
    {
        string s;
        cin>>s;
        ll i,j,k=0,l=s.size(),cur=0,d;
        for(j=0;j<l;j++)
        {
            if (s[j] == '+')
            {
                cur++;
            }
            else
            {
                cur--;
            }
            if (cur < 0)
            {
                k+=(j+1);
                cur=0;
            }
        }
        k+=l;
        cout<<k<<endl;
    }
}
