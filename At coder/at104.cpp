#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);


    string a;

    ll c,d,e,f=0,i,j,k,l;

    cin>>c>>a;

    for(i=0; i<c; i++)
    {
        k=l=0;
        for(j=i; j<c; j++)
        {
            if (a[j] == 'A')
                k++;
            else if (a[j] == 'T')
                k--;
            else if (a[j] == 'C')
                l++;
            else
                l--;

            if(k==0 && l==0) f++;
        }
    }

   cout<<f<<endl;


    return 0;
}
