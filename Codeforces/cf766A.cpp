#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a,c;
    cin>>a>>c;
    if(a==c) cout<<-1<<endl;
    else cout<<max(a.size(),c.size())<<endl;
    return 0;
}
