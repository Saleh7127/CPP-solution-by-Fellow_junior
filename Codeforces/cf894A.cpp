#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    int b,c=0,d,e,f,i,j,k,l;
    cin>>a;
    b=a.size();
    for(i=0; i<b; i++)
    {
        for(j=i+1; j<b; j++)
        {
            for(k=j+1; k<b; k++)
            {
                if(a[i]=='Q' && a[j]=='A' && a[k]=='Q')
                {
                    c++;
                }
            }
        }
    }
    cout<<c<<endl;
    return 0;
}
