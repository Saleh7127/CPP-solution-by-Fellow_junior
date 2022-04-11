#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    char hex[]= {'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};
    string a;
    ll i,j,k,l;

    while(cin>>a && a[0]!='-')
    {

        l=a.size();

        if(a[1]=='x' && a[0]=='0')
        {
            ll ans=0,nm,p=0;
            for(i=l-1; i>1; i--)
            {
                nm=0;
                if(a[i]>='0' && a[i]<='9')
                {
                    nm=a[i]-'0';
                }
                else
                {
                    nm=a[i]-'A'+10;
                }
                ans+=(nm*pow(16,p));
                p++;
            }
            cout<<ans<<endl;
        }
        else
        {
            if(a=="0")
            {
                cout<<"0x0"<<endl;
                continue;
            }
            string ans="";
            ll nm=0;
            for(i=0; i<l; i++)
            {
                nm=(nm*10+(a[i]-'0'));
            }
            while(nm)
            {
                ans+=hex[nm%16];
                nm/=16;
            }

            reverse(ans.begin(),ans.end());

            cout<<"0x"<<ans<<endl;
        }

    }


    return 0;
}
