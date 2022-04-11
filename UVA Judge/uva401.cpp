#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)

map<char, char> m;
string s = "ABCDEFGHIJKLMNOPQRSTUVWXYZ123456789";
string r = "A   3  HIL JM O   2TUVWXY51SE Z  8 ";

bool mirror(string a)
{
    ll l=a.size();
    for(ll i=0; i<l/2+l%2; i++)
    {
        if(a[l-i-1]!=m[a[i]])
        {
            return 0;
        }
    }
    return 1;
}

bool palindrome(string a)
{
    string c;
    c=a;
    reverse(c.begin(),c.end());
    if(c==a) return 1;
    else return 0;
}


int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string a,b,c;
    ll i,j,k,l;

    for(i=0; i<s.size(); i++)
    {
        m[s[i]]=r[i];
    }
    while(cin>>a)
    {
        bool mi=mirror(a);
        bool pa=palindrome(a);

        if(!mi && !pa) cout<<a<<" -- is not a palindrome.\n"<<endl;
        else if(!mi && pa) cout<<a<<" -- is a regular palindrome.\n"<<endl;
        else if(mi && !pa) cout<<a<<" -- is a mirrored string.\n"<<endl;
        else cout<<a<<" -- is a mirrored palindrome.\n"<<endl;

    }


    return 0;
}
