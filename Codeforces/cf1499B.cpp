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

        ll n,b,i,j,k,l=0;
        string a;
        cin>>a;

        for(i=0; i<a.size()-1; i++)
        {
            if(a[i]>a[i+1])
            {
                l=1;
                break;
            }
        }
        if(l==0) cout<<"YES"<<endl;
        else
        {
            l=0;
            k=0;
            for(i=0; i<a.size()-1; i++)
            {
                if(a[i]==a[i+1] && a[i]=='1')
                {
                    l=1;
                }
                if(l==1 && (a[i]==a[i+1] && a[i]=='0'))
                {
                    k=1;
                    break;
                }
            }
            if(k==0) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
    }


    return 0;
}
