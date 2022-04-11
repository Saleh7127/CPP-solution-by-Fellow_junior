#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    int b,c,d,e,f,i,j,k,l;
    cin>>b;
    while(b--)
    {
        cin>>c>>d;
        for(i=0;i<c;i++)
        {
            a+='a'+(i%d);
        }
        cout<<a<<endl;
    }
    return 0;
}
