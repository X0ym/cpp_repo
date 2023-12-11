#include <iostream>

using namespace std;

/*

    快速幂，二进制取幂，可在 O(logn) 时间内计算 a 的 n 次方

    其可应用在任何具有结合律的运算中。可应用在模意义下取幂，矩阵幂等运算


    参考：
    [快速幂](https://oi-wiki.org/math/binary-exponentiation/)

*/

// 迭代版本
long long binpow(long long a, long long b)
{
    long long ans = 1;
    while (b > 0)
    {
        if (b & 1)
            ans *= a;
        a *= a;
        b >>= 1;
    }
    return ans;
}

// 递归版本
long long binpow(long long a, long long b)
{
    if (b == 0)
        return 1;
    long long res = binpow(a, b / 2);
    if (b % 2)
        return res * res * a;
    else
        return res * res;
}

int main()
{
    return 0;
}