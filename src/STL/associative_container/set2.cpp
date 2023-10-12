#include <iostream>
#include <set>
#include <string>

using namespace std;

struct People
{
    string name;
    int age;

    bool operator<(const People p) const
    {
        return age < p.age;
    }
};

int main(int argc, char *argv[])
{
    set<People> setTemp;

    setTemp.insert({"张三", 14});
    setTemp.insert({"李四", 16});
    setTemp.insert({"隔壁老王", 10});

    set<People>::iterator it;
    for (it = setTemp.begin(); it != setTemp.end(); it++)
    {
        printf("姓名：%s 年龄：%d\n", (*it).name.c_str(), (*it).age);
    }

    return 0;
}

/*
输出结果
姓名：王二麻子 年龄：10
姓名：张三 年龄：14
姓名：李四 年龄：16
*/
