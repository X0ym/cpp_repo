#include <iostream>

using namespace std;

// address.cpp -- using the & oprator to find address
int main()
{
    int donuts = 6;
    double cups = 4.5;

    cout << "donuts value = " << donuts;
    cout << " and donuts address = " << &donuts << endl;

    cout << "cups value = " << cups;
    cout << " and cups address = " << &cups << endl;
}

/*
result:
donuts value = 6 and donuts address = 0x7fffffffe02c
cups value = 4.5 and cups address = 0x7fffffffe020
*/