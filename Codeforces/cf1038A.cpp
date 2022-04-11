#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i,n,b,e,a[26]={0},d=0;
	char c;
	scanf("%d %d",&b,&e);
	for(i=0;i<b;i++)
	{
		scanf(" %c",&c);
		a[c-65]++;
	}
	for(i=1;i<e;i++)
	{
		if(a[i]<a[d])
		d=i;
	}
	printf("%d",a[d]*e);
	return 0;
}
