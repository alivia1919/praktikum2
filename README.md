#praktikum2

## latihan1.cpp : program menghitung bilangan terbesar dari 3 bilangan

**Alur algoritma**
1. mendeklarasikan variable `int A, B, C` sebagai variable input.
2. membaca input dari keyboard `cin >> A >> B >> C`
3. membandingkan nilai variable **A** dan **B**
4. kondisi **true**, maka bandingkan nilai variable **A** dengan **C**
5. kondisi **false**, maka bandingkan nilai variable **B** dengan **C**

**flowchart program** 
![flowchart](https://raw.githubusercontent.com/alivia1919/praktikum2/master/latihan1/flowchart.png)

**code program lengkap :**
```c++
#include <iostream>
using namespace std;
int main()
{
int bil1, bil2, bil3, terbesar;
cout<<"Masukkan bilangan 1 : ";
 cin>>bil1;
cout<<"Masukkan bilangan 2 : ";
 cin>>bil2;
cout<<"Masukkan bilangan 3 : ";
 cin>>bil3;

{
if(bil1 > bil2)
terbesar = bil1;

else
terbesar = bil2;

if(bil3 > terbesar)
terbesar = bil3;

cout<<endl;
cout<<"Nilai Terbesar = "<<terbesar;cout<<endl;}

    return 0;
}
# praktikum2
