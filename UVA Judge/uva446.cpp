#include <bits/stdc++.h>
using namespace std;
int main ()
{
    int n, a, b, result;
    char c;

    cin >> n;

    while (n--)
    {
        cin >> hex >> a >> c >> hex >> b;

        if (c == '+') result = a + b;

        else result = a - b;

        cout << bitset<13>(a) << " " << c << " " << bitset<13>(b) << " = " << result << endl;
    }

    return 0;
}




///in c AC
/*
#include <stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int a[100],b[100];
        char c;
        int d,e,f,i,j,k,l;

        scanf("%X %c %X",&d,&c,&e);
        if(c=='+')
        {
            f=d+e;
        }
        else f=d-e;

        for(i=0; i<13; i++)
        {
            a[i]=(d%2);
            d/=2;
        }
        for(i=0; i<13; i++)
        {
            b[i]=(e%2);
            e/=2;
        }
        for(i=12; i>=0; i--)
        {
            printf("%d",a[i]);
        }
        printf(" %c ",c);
        for(i=12; i>=0; i--)
        {
            printf("%d",b[i]);
        }
        printf(" = %d\n",f);

    }
    return 0;
}
*/
