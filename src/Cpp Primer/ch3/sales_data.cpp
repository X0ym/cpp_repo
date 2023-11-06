#include <iostream>
#include <string>

using namespace std;

struct Sales_data
{
    // 成员函数
    string isbn() const { return bookNo; }
    Sales_data &combine(const Sales_data &);
    double avg_price() const;

    // 数据成员
    string bookNo;
    unsigned units_sold = 0;
    double revenue = 0.0;
};

Sales_data add(const Sales_data &, const Sales_data &);
ostream &print(ostream &, const Sales_data &);
istream &read(istream &, Sales_data &);

int main()
{

    return 0;
}