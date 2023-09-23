#include <iostream>

using namespace std;

/*



*/


// struct declaration
struct inflatable
{
    char name[20];
    float volume;
    double price;
};


int main()
{
    // struct required in C
    struct inflatable goose;
    // not required in C++
    inflatable hat;

    // 成员访问符 .
    hat.price = 2.0;
    hat.volume = 1.1;

    inflatable guest = {
        "Glorious Gloria",
        1.88,
        29.99
    };

    cout << "Expand your guest list with " << guest.name;
    // pal.name is the name member of the pal variable
    cout << "You can have $";
    cout << guest.price << "!\n";

    return 0;
}