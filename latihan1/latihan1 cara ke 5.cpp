#include <iostream>
using namespace std;
int main ()
{
    int A,B,C;
    cin >> A >> B >> C;
    if (A>B && A>C)
        cout << A;
    else
        { if (B>C)
            cout << B;
    else cout << C; }
}
