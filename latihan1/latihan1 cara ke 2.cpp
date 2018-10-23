#include <iostream>
void main()
{
int A,B,C, MAX;
cin >> A >> B >> C;
MAX = A;
if (B > MAX)
MAX = B;
if (C > MAX)
MAX = C;
cout << MAX;
}
