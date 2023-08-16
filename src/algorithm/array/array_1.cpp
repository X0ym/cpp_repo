#include<iostream>

using namespace std;

int N1 = 10;
const int N2 = 10;

/*
error: array bound is not an integer constant before ']' token
 int arr1[N1]; // expression must have a constant value
*/
//int arr1[N1]; // expression must have a constant value
int arr2[N2];

/*
a range-based 'for' statement cannot operate on an array 
of unknown size or incomplete type "int []"C/C++(2287)
*/
// void printArr1(int (&arr)[]) {
//     for(auto i : arr)
//     {
//         cout << i << " ";
//     }
//     cout << endl;
// }

void printArr(int (&arr)[3]) {
    for(auto i : arr)
    {
        cout << i << " ";
    }
    cout << endl;
}

int main()
{
    int arr3[10]; // 函数内部数组的默认初始化，其元素值不确定

    // 1. 定义并初始化
    int arr4[5] = {1, 2};           // {1，2, 0，0，0}
    int arr5[] = {1, 2, 3, 4};      // 含义3个元素的数组，元素值为1,2,3,4

    // 不允许拷贝和赋值
    int a1[] = {0, 1, 2};        // 不允许用一个数组初始化另一数组
    //int a2[] = a1;
    
    int a3[3] = {1, 2, 3};
    //int a4[3] = a3;           // 不允许把一个数组直接赋值给另一个数组

    // 复杂数组声明：从数组的名字开始按照由内到外的顺序阅读
    //int *ptrs[10];
    //int *(&arry)[10] a5 = ptrs;

    // 访问数组元素

    for (auto i : a3)
    {
        cout << i << " ";
    }
    cout << endl;
    
    printArr(a3);



    return 0;
}