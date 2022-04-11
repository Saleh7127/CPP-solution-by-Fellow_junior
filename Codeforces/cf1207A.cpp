#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d,e,f,p,h,sum,x,y;
    cin>>a;
    while(a--)
    {
        sum=0;
        cin>>b>>p>>f;
        b=b/2;
        cin>>h>>c;
        if((p+f)<=b)
        {
            sum=(h*p)+(f*c);
        }
        else
        {
            if(c>=h)
            {
                if(f<=b)
                {
                    x=b-f;
                    sum=(c*f)+(x%p)*h;
                }
                else if(f>b)
                {
                    sum=(b*c);
                }
            }
            else if(h>c)
            {
                if(p<=b)
                {
                    x=b-p;
                    sum=(h*p)+(x%f)*c;
                }
                else if(p>b)
                {
                    sum=(b*h);
                }
            }
        }
        cout<<sum<<endl;
    }
    return 0;
}
