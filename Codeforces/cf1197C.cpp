#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    vector<int>a,ans;
    int n,c,i,j,k;
    cin>>n>>k;
    for(i=0; i<n; i++)
    {
        cin>>c;
        a.push_back(c);
        if(i) ans.push_back(a[i]-a[i-1]);
    }
    sort(ans.begin(),ans.end());
    while(k>1)
    {
        ans.pop_back();
        k--;
    }
    j=0;
    for(i=0; i<ans.size(); i++)
    {
        j+=ans[i];
    }
    cout<<j<<endl;

    return 0;
}
