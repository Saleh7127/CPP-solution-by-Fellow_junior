#include<bits/stdc++.h>
using namespace std;


int main()
{
    long long n;

    while (cin >> n )
    {
        long long arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    int q;
    cin>>q;
   long long Q[q];

    for(int i=0; i<q; i++)
    {
        cin>>Q[i];
    }


    if(Q[0]<=arr[0])
    {
        cout<<"X"<<" ";

    }

    for(int i=0; i<q; i++)
    {
        bool boro=0;


        for(int j=0; j<n; j++)
        {

            if(arr[j]< Q[i] && arr[j+1]>=Q[i])
            {
                cout<<arr[j]<<" ";
            }
            else if(arr[j]>Q[i] && arr[j-1]<=Q[i])
            {
                cout<<arr[j]<<endl;
                boro=1;
            }

        }
        if(boro==0)
        {
            cout<<"X"<<endl;
        }
    }

    }

    return 0;
}
