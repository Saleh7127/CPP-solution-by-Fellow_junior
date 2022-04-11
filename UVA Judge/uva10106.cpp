#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)

string multi(string nums1,string nums2)
{
    int l1 = nums1.size();
    int l2 = nums2.size();
    string str( l1 + l2, '0');
    for(int i = l1-1; i >= 0; i--)
    {
        for(int j = l2-1; j >= 0; j--)
        {
            int p = (nums1[i]-'0')*(nums2[j]-'0') + (str[i+j+1]-'0');
            str[i+j+1] = p%10 + '0';
            str[i+j] += p/10;
        }
    }
    for(int i = 0; i < l1+l2; i++)
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
    cin.tie(0);
    cout.tie(0);

    string a,c;
    while(cin>>a>>c)
    {
        cout<<multi(a,c);
        cout<<endl;
    }
    return 0;
}

