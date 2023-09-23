#include <iostream>

using namespace std;

/*

程序存储数据必须跟踪的三种基本属性：
    1. 信息存储在何处
    2. 存储的值
    3. 存储的信息是什么类型

声明和初始化指针

    int *ptr;   // c style
    int* ptr;   // c++ style

结构指针
    通过使用 new 在程序运行时为结构分配所需的空间
    inflatable* ps = new inflatable;

创建动态结构时，不能将成员运算符（句点）用于结构名。因为这种结构没有名称，只知道
地址，因此对于指向结构的指针，可使用箭头成员运算符（->）访问成员变量，如 ps->price



*/

struct inflatable
{
    char name[20];
    float volume;
    double price;
};

int main()
{
    int updates = 6;
    int *p_updates;
    p_updates = &updates;

    cout << "Values updates = " << updates;
    cout << ", *p_updates = " << *p_updates << endl;

    cout << "Address: &updates = " << &updates;
    cout << ", p_updates = " << p_updates << endl;

    *p_updates = *p_updates + 1;
    cout << "Now updates = " << updates << endl;

    inflatable *ps = new inflatable;
    cout << ps->name << endl; // method 2 for member access

    // change volume's value
    (*ps).volume = 1.1; // method 2 for member access
    ps->price = 1.2;

    cout << "Name: " << (*ps).name << endl;              // method 2
    cout << "Volume: " << ps->volume << " cubic feet\n"; // method 1
    cout << "Price: $" << ps->price << endl;             // method 1
    delete ps;                                           // free memory used by structure

    return 0;
}

/*

result:
Values updates = 6, *p_updates = 6
Address: &updates = 0x7fffffffe024, p_updates = 0x7fffffffe024
Now updates = 7

*/