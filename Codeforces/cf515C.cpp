#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; while(t--)
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ll c,e,f=1,i,j,k,l;
    string d,a,x[]= {"","","2","3","322","5","53","7","7222","7332"};;
    cin>>c>>d;
    for(i=0;i<c;i++)
    {
        e=d[i]-'0';
        a+=x[e];
    }
    sort(a.rbegin(),a.rend());
    cout<<a<<endl;
    return 0;
}
