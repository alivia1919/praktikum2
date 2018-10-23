#include <iostream>

using namespace std;

int main()
{
int A,B,C, MAX;
cin >> A;
MAX = A;
cin >> B;
if (B > MAX)
MAX = B;
cin >> C;
if (C > MAX)
MAX = C;
cout << MAX;
}
