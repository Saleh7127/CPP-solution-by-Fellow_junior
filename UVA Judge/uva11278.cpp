#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
int main()
{
    string f=" `\\1234567890-=qwertyuiop[]asdfghjkl;'zxcvbnm,./~!@#$%^&*()_+QWERTYUIOP{}|ASDFGHJKL:ZXCVBNM<>\"?";
    string s=" `\\123qjlmfp/[]456.orsuyb;=789aehtdck-0zx,inwvg'~!@#QJLMFP?{}$%^>ORSUYB:+|&*(AEHTDCK)ZX<INWVG_\"";
    string a;
    while(getline(cin,a))
    {
        ll l=a.size();
        for(ll i=0; i<l; i++)
        {
            for(ll j=0; j<f.size(); j++)
            {
                if(a[i]==f[j])
                {
                    cout<<s[j];
                    break;
                }
            }
        }
        cout<<endl;
    }
    return 0;
}
