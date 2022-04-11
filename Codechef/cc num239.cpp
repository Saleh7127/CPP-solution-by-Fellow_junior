#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b,c,d,e,f,i,j,k,t;
    cin>>t;
    while(t--)
    {
        d=0;
        cin>>a>>b;
        for(i=a; i<=b; i++)
        {
            c=i%10;
            if(c==2 || c==3 || c==9)
            {
                d++;
            }
        }
        cout<<d<<endl;
    }
    return 0;
}
