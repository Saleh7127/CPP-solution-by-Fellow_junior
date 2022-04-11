#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin>>t;
    while(t--)
    {
        int r,g,v,w,i,j,k,l=0,a=0,s,d;
        cin>>r>>g>>v>>w;
        if(r&1)l++;
        if(w&1)l++;
        if(v&1)l++;
        if(g&1)l++;
        if(l<=1)
        {
            cout<<"Yes"<<endl;
            continue;
        }
        if(r==0 || g==0 || v==0)
        {
            cout<<"No"<<endl;
            continue;
        }
        r-=1;
        v-=1;
        g-=1;
        w+=3;
        l=0;
        if(r&1)l++;
        if(w&1)l++;
        if(v&1)l++;
        if(g&1)l++;
        if(l<=1)
        {
            cout<<"Yes"<<endl;
        }
        else cout<<"No"<<endl;
    }
    return 0;
}
