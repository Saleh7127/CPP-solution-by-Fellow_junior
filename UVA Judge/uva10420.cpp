#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a,b;
    int t;
    cin>>t;
    map<string,int>c;
    for(int i=0; i<t; i++)
    {
        cin>>a;
        getline(cin,b);
        c[a]++;
    }
    map<string,int>::iterator d;
    for(d=c.begin();d!=c.end();++d)
    {
        cout<<d->first<<" "<<d->second<<endl;
    }
    return 0;
}
