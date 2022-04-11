#include <bits/stdc++.h>
using namespace std;
int x[2][6500000],a[210000];
int main()
{

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n,i,j,l;

    cin>>n;

    for(i=0; i<n; i++)
    {
        cin>>a[i];
    }

    for(i=0; i<n; i++)
    {
        for(j=i+1; j<n; j++)
        {
            l=a[i]+a[j];

            if(x[0][l] && x[1][l] && x[0][l]!=i+1 && x[0][l]!=j+1 && x[1][l]!=i+1 && x[1][l]!=j+1)
            {
                cout<<"YES"<<endl;
                cout<<i+1<<" "<<j+1<<" "<<x[0][l]<<" "<<x[1][l]<<endl;
                return 0;
            }
            else x[0][l]=i+1,x[1][l]=j+1;
        }
    }

    cout<<"NO"<<endl;
    return 0;
}





















