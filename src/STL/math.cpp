#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    // exp(x) 返回 e 的 x 次幂
    cout << "e^2 = " << exp(2) << endl;

    // pow(x, y) 返回 x 的 y 次幂
    cout << "2 的 2 次幂: " << pow(2, 2) << endl;

    // sqrt(x) 返回 x 的平方根
    cout << "4 的平方根: " << sqrt(4) << endl;

    //  ceil 向上取整
    cout << "ceil(2.1) = " << ceil(2.1) << endl;
    // floor 向下取整
    cout << "floor(2.1) = " << floor(2.1) << endl;

    // abs(x) 返回整型 x 的绝对值 fabs 返回浮点数的绝对值
    cout << "abs(10) = " << abs(10) << endl;
    cout << "abs(-10) = " << abs(-10) << endl;
}