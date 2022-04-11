#include <bits/stdc++.h>
using namespace std;
int main()
{

    int tt;
    cin>>tt;
    while(tt--)
    {


        int n,k,i,z=0,j,l,m,a,b,c,d,e,f;


        char x='a';

        cin>>n>>k;



        for(i=1; i<=n; i++)
        {

            z++;
            if(z<=k)
            {
                cout<<x;
            }

            else
            {
                z=1;
                x++;


                if(x>'c') x='a';
                cout<<x;
            }

        }
        cout<<"\n";
    }

    return 0;
}
