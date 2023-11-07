#include<iostream>

using namespace std;

/*

# 数组

数组类型：1）元素类型，2）数组名，3）数组大小，即数组中元素的个数

声明数组：`typeName arrName[arrSize]` ，示例  `short months[12];`
> 注意：数组大小必须是整型常数或 const 值，或常量表达式，即在编译时是已知的。

数组初始化规则：只有在定义数组时才能使用初始化；**不能将数组赋值给另一个数组**。


*/

void test() {
    using namespace std;
    int yams[3]; 
    yams[0] = 7; 
    yams[1] = 8;
    yams[2] = 6;

    int yamcosts[3] = {20, 30, 5}; 




    cout << "Total yams = ";
    cout << yams[0] + yams[1] + yams[2] << endl;
    cout << "The package with " << yams[1] << " yams costs ";
    cout << yamcosts[1] << " cents per yam.\n";
    int total = yams[0] * yamcosts[0] + yams[1] * yamcosts[1];
    total = total + yams[2] * yamcosts[2];
    cout << "The total yam expense is " << total << " cents.\n";

    cout << "\nSize of yams array = " << sizeof yams;
    cout << " bytes.\n";
    cout << "Size of one element = " << sizeof yams[0];
    cout << " bytes.\n";
}

int main()
{
    test();
}

