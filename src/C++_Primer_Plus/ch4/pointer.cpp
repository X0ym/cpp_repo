#include <iostream>

using namespace std;

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
    return 0;
}

/*

result:
Values updates = 6, *p_updates = 6
Address: &updates = 0x7fffffffe024, p_updates = 0x7fffffffe024
Now updates = 7

*/