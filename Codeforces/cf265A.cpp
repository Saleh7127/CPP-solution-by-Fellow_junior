#include<bits/stdc++.h>
using namespace std;
int main()
{
    int c,d,e,f,i,j,k,l;
    string a,b;
    cin>>a;
    cin>>b;
    for(i=0,j=0; i<b.size(); i++)
    {
        if(b[i]==a[j])
        {
            j++;
        }
    }
    cout<<j+1<<endl;
    return 0;
}
