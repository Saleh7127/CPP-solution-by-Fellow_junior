#include<bits/stdc++.h>
using namespace std;
int vowel(char c)
{
    return c=='a' || c=='e' || c=='i' || c=='o' || c=='u';
}

int main()
{
    string a,b;
    int d,e,f,i,j,k,l;
    cin>>a>>b;
    d=a.size();
    e=b.size();
    if(d!=e)
    {
        cout<<"NO\n";
        return 0;
    }
    for(i=0;i<d;i++)
    {
        if(vowel(a[i])!=vowel(b[i]))
        {
        cout<<"NO\n";
        return 0;
        }
    }
     cout<<"YES\n";
     return 0;
}
