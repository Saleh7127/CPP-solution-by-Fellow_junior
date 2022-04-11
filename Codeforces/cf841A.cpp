#include<bits/stdc++.h>
using namespace std;
int main()
{
    int b,c,d=1,e,f,i,j,k,l;
    string a;
    cin>>b>>c;
    cin>>a;
    for(i=0;i<b;i++)
    {
        d=1;
        for(j=i+1;j<b;j++)
        {
            if(a[i]==a[j])
            {
                d++;
            }
        }
        if(d>c)
        {
            cout<<"NO\n";
            return 0;
        }
    }
    printf("YES\n");
    return 0;
}
