#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);


    test
    {

      ///B.Flipstring
        string s1,s2;
        cin>>s1>>s2;
        int n=s1.length();
        int c=0;
        for(int i=0; i<n; i++)
        {
            if(s1[i]==s2[i])
                continue;
            int p=i;
            while(p<n && (s1[p]!=s2[p]))
            {
                s1[p]=s2[p];
                p=p+2;
            }
            c++;

        }
        cout<<c<<endl;


        /*
        A.Chef and IPC Certificates

        ll n,m,i,j,k,l=0;
        cin>>n>>m>>k;
        while(n--)
        {
            ll a;
            ll q;
            ll b=0;
            for(i=0;i<k;i++)
            {
                cin>>a;
                b+=a;
            }
            cin>>q;
            if(b>=m && q<=10) l++;
        }
        cout<<l<<endl;
        */
    }
    return 0;
}
