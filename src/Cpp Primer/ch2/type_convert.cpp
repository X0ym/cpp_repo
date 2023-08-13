#include <iostream>

using namespace std;

int main()
{
    // literal
    bool b = 42;            // b 为真
    printf("b=%d\n", b);

    int i = b;              // i = 1
    i = 3.14;               // i = 3

    double pi = i;          // pi = 3.0
    unsigned char c = -1;   // 

    
    // 
    int sum, value = 1;     // sum = 0, value = 1
    // sum=0 value=1
    printf("sum=%d value=%d\n", sum, value);

    /*
    
    初始化：对象或变量在创建时赋予其一个初始值
    初始化和赋值是两个完全不同的操作
    初始化的含义是在创建变量时赋予其一个初始值，而赋值的含义是把对象当前的值擦除，
    并以新的值替代


    */

    int a;
    printf("a=%d", a);

    return 0;
}