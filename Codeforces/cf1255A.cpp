#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long a,b,c,d,e,f,g,h,i,j,k,l;
    cin>>a;
    while(a--)
    {
        e=0;
        d=0;
        cin>>b>>c;
        d=abs(b-c);
        if(d<5)
        {
            e=(d/2)+(d%2);
            cout<<e<<endl;
        }
        else if(d==5)
        {
            cout<<"1\n";
        }
        else if(d>5)
        {
            if(d%5==0)
            {
                e=d/5;
            }
            else if(d%5==1 || d%5==2)
            {
                e=(d/5)+1;
            }
            else if(d%5==3 || d%5==4)
            {
                e=(d/5)+2;
            }
            cout<<e<<endl;
        }

    }
    return 0;
}
