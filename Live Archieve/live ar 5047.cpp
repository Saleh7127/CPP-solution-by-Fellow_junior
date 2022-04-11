#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define fellow_junior  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
string number(string x)
{
    ll l= x.size();
    string w;
    for(ll i = 0; i < l; i++)
    {
        if(x[i] >= '0' && x[i] <= '9') continue;
        else w+= x[i];
    }
    return w;
}

string capsCheck(string z)
{
    ll ln = z.size();
    string ans;
    for(ll i = 0; i < ln; i++)
    {
        if(z[i] >= 'a' && z[i] <= 'z') ans +=(z[i]-32);
        else if(z[i] >= 'A' && z[i] <= 'Z') ans +=(z[i]+32);
        else ans += z[i];
    }
    return ans;
}

int main()
{
    ll t,j;
    cin>>t;
    for(j=1; j<=t; j++)
    {
        string a,c,d;
        cin >>a >>c;
        cout << "Case " << j << ": ";

        d.clear();
        d = number(a);
        if(a == c) cout << "Login successful." << endl;
        else if(d == c) cout << "Wrong password. Please, check your num lock key." << endl;
        else if(capsCheck(a) == c) cout << "Wrong password. Please, check your caps lock key." << endl;
        else if(capsCheck(d) == c) cout << "Wrong password. Please, check your caps lock and num lock keys." << endl;
        else cout << "Wrong password." << endl;
    }

    return 0;

}
