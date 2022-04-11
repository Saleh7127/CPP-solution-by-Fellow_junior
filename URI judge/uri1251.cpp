#include<bits/stdc++.h>
using namespace std;
string a;
int b[10000];
int main()
{
  	int i,j,k,l,c,d,f,e;
  	while(cin>>a)
    {
        l=a.size();
        for(i=0;i<l;i++)
        {
            b[a[i]]++;
        }
        k=*(&b+1)-b;
        sort(b,b+k);
        for(i=0;i<k;i++)
        {
            printf("%d %d",i,b[i]);
        }
    }
  	return 0;
}
