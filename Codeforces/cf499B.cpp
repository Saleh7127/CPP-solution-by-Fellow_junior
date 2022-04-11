#include <bits/stdc++.h>
using namespace std;
#define ll long long
map<string,string>a;
int main()
{
    ll n,m,i,j,k,l;
    string c,d;
    cin>>n>>m;
    while(m--)
    {
        cin>>c>>d;
        a[c]=d;
    }
    while(n--)
    {
        cin>>c;
        if(a[c].size()<c.size()) cout<<a[c]<<" ";
        else cout<<c<<" ";
    }
    printf("\n");
    return 0;
}
/*
	cin>>n>>m;
	map <string,string> d;
	while(m--){
		cin>>a>>b;
		if(a.length()>b.length())
			d[a]=b;
		else d[a]=a;
	}
	while(n--){
		cin>>a;
		cout<<d[a]<<endl;
	}
	cin>>a;
	return 0;
*/
