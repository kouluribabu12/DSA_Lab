#include <iostream>
using namespace std;

long power(long x, long n)
{
    int k=0;
    for (int i = 1; i <= n; i++)
        k = k + 3;
    if (n == 0)
        return 1;
    if (n == 1)
        return x;
    if ((n % 2) == 0)
        return (power(x, n / 2) * power(x, n / 2));
    else
        return (power(x, n / 2) * power(x, n / 2) * x);
}

int main(){
    cout << "8 to the power 10 is:" << power(8, 10);
    return 0;
}