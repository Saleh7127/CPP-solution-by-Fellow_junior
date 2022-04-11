#include <bits/stdc++.h>
using namespace std;
int main()
{

    int cc;
    cin>>cc;
    while(cc--)

    {
        int x,y=0;
        int n;
        string z;

        cin>>n;
        cin>>z;

        for(int i=0; i<n; i++)
        {
            if(z[i]!=')')
            {
                y=i+1;
            }
        }
        x=n-y;


        if(x>y)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }

    return 0;
}
