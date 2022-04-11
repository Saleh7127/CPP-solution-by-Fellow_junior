#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i,s=0;
    char a[10000];
    scanf("%[^\n]%*c",&a);
    int l= strlen(a);
    sort(a,a+l);
    for(i=0; i<l; i++)
    {
        if(a[i]>96 && a[i]<123)
        {
            s++;
            if(a[i]==a[i+1])
            {
                s--;
            }
        }

    }
    printf("%d\n",s);
    return 0;
}
