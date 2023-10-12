#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    int a = 1, b = 10;
    cout << "Before swap: a= " << a << " b= " << b << endl;
    swap(a, b);
    cout << "After swap: a= " << a << " b= " << b << endl;

    return 0;
}

/**
 * result:
 *  Before swap: a= 1 b= 10
 *  After swap: a= 10 b= 1
 */