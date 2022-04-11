#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    zzz:

    test
    {
        ll i,j,k,l=0;
        string a;
        cin>>a>>k;
        string b(a.size(),'0');
        for(i=0; i<a.size(); i++)
        {
            if(a[i]=='1')
            {
                if(i-k>=0 && (i-2*k<0 || a[i-2*k]=='1'))
                {
                    b[i-k]='1';
                }
                else if(i+k<a.size() && (i+2*k>a.size() || a[i+2*k]=='1'))
                {
                    b[i+k]='1';
                }
                else
                {
                    cout<<-1<<endl;
                    goto zzz;
                }
            }
        }
        cout<<b<<endl;
    }


    return 0;
}
