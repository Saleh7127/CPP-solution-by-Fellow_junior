#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)

string multi(string nums1,string nums2)
{
    ll l1 = nums1.size();
    ll l2 = nums2.size();

    ll i,j;

    string str( l1 + l2, '0');

    for(i=l1-1; i>= 0; i--)
    {
        for(j=l2-1; j>= 0; j--)
        {
            ll p = (nums1[i]-'0')*(nums2[j]-'0') + (str[i+j+1]-'0');
            str[i+j+1] = p%10 + '0';
            str[i+j] += p/10;
        }
    }
    for(i=0; i<l1+l2; i++)
    {
        if(str[i]!= '0')
        {
            return str.substr(i);
        }
    }
    return "0";
}

int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);

   test
   {
       string a,b;
       cin>>a>>b;
       cout<<multi(a,b)<<endl;
   }


   return 0;
}
