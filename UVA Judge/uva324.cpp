#include<iostream>
using namespace std;

#define MAX 100000

int multiply(int x, int res[], int res_size);

void factorial(int n)
{
    int res[MAX];
    int ans[10]={0};
    res[0] = 1;
    int res_size = 1;

    for (int x=1; x<=n; x++)
    {
        res_size = multiply(x, res, res_size);
    }
    for (int i=res_size-1; i>=0; i--)
    {
        int zz=res[i];
        ans[zz]++;
    }


    printf("   (0)%5d    (1)%5d    (2)%5d    (3)%5d    (4)%5d\n",ans[0],ans[1],ans[2],ans[3],ans[4]);
    printf("   (5)%5d    (6)%5d    (7)%5d    (8)%5d    (9)%5d\n",ans[5],ans[6],ans[7],ans[8],ans[9]);

}

int multiply(int x, int res[], int res_size)
{
    int carry = 0;

    for (int i=0; i<res_size; i++)
    {
        int prod = res[i] * x + carry;
        res[i] = prod % 10;
        carry  = prod/10;
    }

    while (carry)
    {
        res[res_size] = carry%10;
        carry = carry/10;
        res_size++;
    }
    return res_size;
}

int main()
{

    int n;
    while(cin>>n && n)
    {
        cout<<n<<"! --"<<endl;
        factorial(n);
    }

    return 0;
}
