#include <iostream>
#include <deque>

using namespace std;

/*

deque

双端队列，一般情况下使用队列时，可考虑直接使用双端队列

*/

void construct()
{
    // constructors used in the same order as described above:
    deque<int> first;                               // empty deque of ints
    deque<int> second(4, 100);                      // fill constructor. four ints with value 100
    deque<int> third(second.begin(), second.end()); // range constructor. iterating through second
    deque<int> fourth(third);                       // a copy of third

    // the iterator constructor can be used to copy arrays:
    int myints[] = {16, 2, 77, 29};
    deque<int> fifth(myints, myints + sizeof(myints) / sizeof(int));

    cout << "The contents of fifth are:";
    for (deque<int>::iterator it = fifth.begin(); it != fifth.end(); ++it)
        cout << ' ' << *it;

    cout << '\n';
}

int main()
{
    cout << "C++" << endl;
    return 0;
}