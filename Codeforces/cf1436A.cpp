#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{

    int t;
    cin>>t;
    for(int i=1; i<=t; i++)
    {
        int x[100005],y,c,z=0;




        cin>>y>>c;

        for(int j=0; j<y; j++)
        {
            cin>>x[i];
            z+=x[i];
        }



        if(z==c)   cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }


    return 0;
}
