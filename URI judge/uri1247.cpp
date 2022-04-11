#include<bits/stdc++.h>
using namespace std;
int main()
{
    int d,vf,vg,a=12;
    double f,g,b;
    while(cin>>d)
    {
        cin>>vf>>vg;
        b=(double)sqrt(144+(d*d));
        f=(double)a/vf;
        g=(double)b/vg;
        if(g<=f) cout<<"S\n";
        else cout<<"N\n";
    }
    return 0;
}
