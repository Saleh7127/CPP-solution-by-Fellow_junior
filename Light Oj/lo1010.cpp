#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d,e,f,i,j,k,l;
    cin>>f;
    for(l=1; l<=f; l++)
    {
        d=0;
        c=0;
        cin>>a>>b;
        cout<<"Case "<<l<<": ";
        if(a==1 || b==1)
        {
            d=a*b;
        }
        else if(a==2 || b==2)
        {
            c=max(a,b);
            if(c%4==1 || c%4==3)
            {
                d=c+1;
            }
            else if(c%4==2)
            {
                d=c+2;
            }
            else
            {
                d=c;
            }
        }
        else
        {
            if(a*b%2==0)
            {
                d=(a*b)/2;
            }
            else
            {
                d=1+(a*b)/2;
            }
        }
        cout<<d<<endl;
    }
    return 0;
}
