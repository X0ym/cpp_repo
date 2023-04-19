#include<iostream>

using namespace std;

int main()
{
    char ch = 'M';
    int i = ch;
    cout << "The ASCII code for " << ch << " is " << i << endl;

    cout << "Add one to the character code:" << endl;
    ch = ch + 1;             // change character code in ch
    i = ch;                  // save new character code in i
    cout << "The ASCII code for " << ch << " is " << i << endl;

    cout << "Displaying char ch using cout.put(ch): ";
    cout.put(ch);

    
    cout.put('!');

    cout << endl << "Done" << endl;

    return 0;
}

/*

Output:
The ASCII code for M is 77
Add one to the character code:
The ASCII code for N is 78
Displaying char ch using cout.put(ch): N!
Done

*/