#include<iostream>

using namespace std;

/*
    简单主函数：
    读取两个数，求它们的和
*/
int main()
{
    // 提示用户输入两个数
	cout << "Enter two numbers:" << endl;
	int v1 = 0 , v2 = 0;    // 保存读入数据的变量

	cin  >> v1 >> v2 ;      // 读取输入的数据
	cout << "The mul of " << v1 << " and " << v2
			  << " is " << v1 * v2 << endl;
	return 0;

}