#include <iostream>
using namespace std;

int method(int n, int k)
{
    int sum=0;
    for (int i = 1; i <= n * n; i++)
        for (int j = 0; j < i; j++)
            if (n <= 1)
                return n;
        sum = sum++;
    return (method(n - 1, k / 2) + k + method(n - 1, k));
}

int main(){
    cout<<"calling method on 4 and 5: "<<method(4, 5);
    return 0;
}