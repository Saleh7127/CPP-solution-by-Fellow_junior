#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    test
    {
        ll b,d,e,f,i,j,k,l;
        string a;
        char c='E';

        cin>>b;
        cin>>a;
        for(i=0; i<b; i++)
        {
            if(c=='E')
            {
                if(a[i]=='0') c='S';
                else c='N';
            }
            else if(c=='N')
            {
                if(a[i]=='0') c='E';
                else c='W';
            }
            else if(c=='W')
            {
                if(a[i]=='0') c='N';
                else c='S';
            }
            else if(c=='S')
            {
                if(a[i]=='0') c='W';
                else c='E';
            }
        }
        cout<<c<<endl;

    }


    return 0;
}
