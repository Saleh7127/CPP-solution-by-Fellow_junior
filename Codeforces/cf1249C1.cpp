#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,t,c,d,e,f,i,j,k,l;
    cin>>t;
    while(t--)
    {
        cin>>a;
        while(1)
        {
            b=0;
            c=a;
            while(c>0)
            {
                if(b==0 && c%3==2) b=1;
                c=c/3;
            }
            if(b==0) break;
            a++;
        }
        cout<<a<<endl;
    }
    return 0;
}
