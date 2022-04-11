#include <bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    int i,j,k,l;
    while(getline(cin,a))
    {
        l=a.size();
         for(i=0;i<l;i++)
         {
             printf("%c",a[i]-7);
         }
         cout<<endl;
    }
    return 0;
}
