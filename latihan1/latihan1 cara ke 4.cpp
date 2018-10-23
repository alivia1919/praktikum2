#include <iostream>

using namespace std;

int main ()
{
    int A, MAX;
    cin >> A;
    MAX = A;
    cin >> A;
    if (A > MAX)
    MAX = A;
    cin >> A;
    if (A > MAX)
    MAX = A;
    cout << MAX;
}
