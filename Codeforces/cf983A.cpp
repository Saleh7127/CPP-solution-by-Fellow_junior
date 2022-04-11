#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    int b,c=0,d,ef,i,j,k,l;
    cin>>b;
    cin>>a;
    for(i=0; i<b; i++)
    {
        if(a[i]=='a' || a[i]=='e' || a[i]=='i' || a[i]=='o' || a[i]=='u' || a[i]=='y')
        {
            c++;
            if(c==1)
            {
                cout<<a[i];
            }
        }
        else
        {
            cout<<a[i];
            c=0;
        }
    }
    return 0;
}
