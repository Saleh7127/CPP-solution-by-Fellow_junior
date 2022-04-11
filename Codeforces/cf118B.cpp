#include <bits/stdc++.h>
using namespace std;
#define test int t; cin>>t; while (t--)
#define ll long long int
#define fellow_junior  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
    fellow_junior
    ll a,c,d,e,f,i,j,k=0,l;
    cin>>a;
    l=2*a;
    d=-1,e=-1;
    for(i=0; i<(2*a)+1; i++)
    {
        if(i>a) d--,e--;
        else d++,e++;
        for(int m=0; m<l; m++)
        {
            cout<<" ";
        }
        if(i<a) l-=2;
        else l+=2;
        k=0;
        for(j=0; j<(2*e)+1; j++)
        {

            cout<<k;
            if(j<(2*e)) cout<<" ";
            if(j<d) k++;
            else k--;
        }
        cout<<endl;
    }


    return 0;
}
