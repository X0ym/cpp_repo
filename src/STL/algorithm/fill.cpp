#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int a[10];
    fill(a, a + 3, 0);
    for (auto e : a)
        cout << e << " ";
    cout << endl;

    vector<int> v1(8);
    fill(v1.begin(), v1.begin() + 2, 5);
    for (auto e : v1)
        cout << e << " ";
    cout << endl;
    return 0;
}

/*

result:
0 0 0 32767 -136478368 32767 -136478368 32767 -136478080 32767
5 5 0 0 0 0 0 0

*/