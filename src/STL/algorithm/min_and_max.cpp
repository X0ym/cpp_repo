#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    cout << max(1, 2) << endl;
    cout << max({1, 4}) << endl;

    cout << min(1, 2) << endl;
    cout << min({1, 4}) << endl;

    vector<int> v1 = {1, 2, 5};
    cout << *max_element(v1.begin(), v1.end()) << endl;
    cout << *min_element(v1.begin(), v1.end()) << endl;

    return 0;
}