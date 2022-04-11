#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string a,c;

    while(getline(cin,a) && getline(cin,c))
    {

        int common[26] = {0};
        int A[26] = {0};
        int B[26] = {0};

        for(int i = 0; i<a.size(); i++)A[a[i]-97]++;
        for(int i = 0; i<c.size(); i++)B[c[i]-97]++;

        for(int i = 0; i<26; i++)common[i] = min(A[i], B[i]);

        for(int i=0; i<26; i++)
        {
            for(int j = 0; j < common[i] ; j++ )printf("%c",'a'+i);
        }
        cout<<endl;
    }


    return 0;
}
