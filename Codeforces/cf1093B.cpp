#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int b,c,d,e,f,i,j,k,l;
    cin>>b;
    while(b--)
    {
        string a;
        cin>>a;
        c=a.size();
        sort(a.begin(),a.end());
        if(a[0]==a[c-1])
        {
            cout<<-1<<endl;
        }
        else cout<<a<<endl;
    }
    return 0;
}
