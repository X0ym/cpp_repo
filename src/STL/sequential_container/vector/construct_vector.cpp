#include <iostream>
#include <vector>

using namespace std;

/*

(1) empty container constructor (default constructor)
Constructs an empty container, with no elements.
(2) fill constructor
Constructs a container with n elements. Each element is a copy of val (if provided).
(3) range constructor
Constructs a container with as many elements as the range [first,last), with each element emplace-constructed from its corresponding element in that range, in the same order.
(4) copy constructor (and copying with allocator)
Constructs a container with a copy of each of the elements in x, in the same order.
(5) move constructor (and moving with allocator)
Constructs a container that acquires the elements of x.
If alloc is specified and is different from x's allocator, the elements are moved. Otherwise, no elements are constructed (their ownership is directly transferred).
x is left in an unspecified but valid state.
(6) initializer list constructor
Constructs a container with a copy of each of the elements in il, in the same order.

*/

// Construct vector
int main()
{
    // Construct vector
    vector<int> v1;        // 默认构造函数，创建空的 vector<int>
    vector<string> v2(10); // 填充构造函数，指定容量为 10
    vector<int> v3(10, 1); // 填充构造函数
    vector<int> v4(v1);    // copy constructor
    vector<int> v5{1, 2};  // initializer list constructor
    vector<int> v6(v5.begin(), v5.end());

    for (auto it : v6)
        cout << it << endl;

    cout << endl;
    for (auto it = v5.begin(); it != v5.end(); ++it)
        cout << *it << endl;
}