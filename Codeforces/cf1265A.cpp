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
        string a;
        ll i,j,k,l=0;
        cin>>a;
        for(i=0; i<a.size()-1; i++)
        {
            if(a[i]!='?' && a[i]==a[i+1])
            {
                l=1;
                break;
            }
        }
        if(l) cout<<-1<<endl;
        else
        {
            for(i=0; i<a.size(); i++)
            {
                if(a[i]=='?')
                {
                    for(char xx='a'; xx<='c'; xx++)
                    {
                        if(xx!=a[i+1] && xx!=a[i-1])
                        {
                            a[i]=xx;
                            break;
                        }
                    }
                }
            }
            cout<<a<<endl;
        }
    }


    return 0;
}
