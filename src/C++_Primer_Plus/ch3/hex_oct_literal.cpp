#include<iostream>

using namespace std;

int main()
{
    int chest = 42;
    int waist = 0x42;
    int inseam = 042;

    cout << "Monsieur cuts a striking figure!\n";
    cout << "chest = " << chest << " (42 in decimal)\n";
    cout << "waist = " << waist << " (0x42 in hex)\n";
    cout << "inseam = " << inseam << " (042 in octal)\n";
    cout << endl;
    cout << "chest = " << chest <<" (decimal for 42)" << endl;
    cout << hex; // manipulator for changing number base
    cout << "waist = " << waist << " (hexadecimal for 42)" << endl;
    cout << oct; // manipulator for changing number base
    cout << "inseam = " << inseam << " (octal for 42)" << endl;

    return 0;
}

/*

Output:
Monsieur cuts a striking figure!
chest = 42 (42 in decimal)
waist = 66 (0x42 in hex)
inseam = 34 (042 in octal)

chest = 42 (decimal for 42)
waist = 42 (hexadecimal for 42)
inseam = 42 (octal for 42)

*/