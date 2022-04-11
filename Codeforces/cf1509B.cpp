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

        ll n,m,i,j,k,l;


        string a;
        cin>>n>>a;
        j=k=l=0;
        for(char x:a)
        {
            if(x=='T') j++;
            else
            {
                if(j>k) k++;
                else
                {
                    l=1;
                    break;
                }
            }
        }
        if(l)
        {
            cout<<"NO"<<endl;
            continue;
        }
        j=k=l=0;

        reverse(a.begin(),a.end());
        for(char x:a)
        {
            if(x=='T') j++;
            else
            {
                if(j>k) k++;
                else
                {
                    l=1;
                    break;
                }
            }
        }
        if(l) cout<<"NO"<<endl;
        else if(j==(k*2)) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }



    return 0;
}
