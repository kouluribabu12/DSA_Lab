#include <iostream>
using namespace std;

int root(int n, int k)
{
    for (int i = n; i > 1; i = i / 2)
        k = k + 3;
    for (int i = n; i > 1; i = i / 2)
        k = k + 3;
    if(n <= 1) return 1;
    else return (root(n / 2, 2*k) + root(n / 2, k / 2) + root(n / 2, k));
}

int main()
{
    cout << "calling root on 9 and 3: " << root(9, 3);
    return 0;
}