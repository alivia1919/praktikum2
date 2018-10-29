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
```

**hasilnya :**

![hasilnya](https://raw.githubusercontent.com/alivia1919/praktikum2/master/latihan1/SS.png)


## latihan1 cara ke 2.cpp : program menghitung bilangan terbesar dari 3 bilangan

**flowchart program** 
![flowchart](https://raw.githubusercontent.com/alivia1919/praktikum2/master/latihan1/flowchart%20cara%20ke%202.png)

**code program lengkap :**
```c++
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
```

## latihan1 cara ke 3.cpp : program menghitung bilangan terbesar dari 3 bilangan

**flowchart program** 
![flowchart](https://raw.githubusercontent.com/alivia1919/praktikum2/master/latihan1/flowchart%20cara%20ke%203.png)

**code program lengkap :**
```c++
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
```

## latihan1 cara ke 4.cpp : program menghitung bilangan terbesar dari 3 bilangan

**flowchart program** 
![flowchart](https://raw.githubusercontent.com/alivia1919/praktikum2/master/latihan1/flowchart%20cara%20ke%204.png)

**code program lengkap :**
```c++
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
```

## latihan1 cara ke 5.cpp : program menghitung bilangan terbesar dari 3 bilangan

**flowchart program** 
![flowchart](https://raw.githubusercontent.com/alivia1919/praktikum2/master/latihan1/flowchart%20cara%20ke%205.png)

**code program lengkap :**
```c++
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
```

## latihan1 cara ke 6.cpp : program menghitung bilangan terbesar dari 3 bilangan

**flowchart program** 
![flowchart](https://raw.githubusercontent.com/alivia1919/praktikum2/master/latihan1/flowchart%20cara%20ke%206.png)

**code program lengkap :**
```c++
#include <iostream>

using namespace std;

int main()
{
int A,B,C;
cin >> A >> B >> C;
if (A>B && A>C)
cout << A;
if (B>A && B>C)
cout << B;
if (C>A && C>B)
cout << C;
}
```

=======================================================================================================================

## latihan2.cpp : program menghitung bilangan terbesar dari 4 bilangan

**Alur algoritma**
1. Mendeklarasikan variable int A, B, C, D sebagai variable input
2. Membaca input Dari keyboard cin >> A >> B >> C >> D
3. Membandingkan nilai variable A dengan B
4. Kondisi True maka bandingkan nilai variable A dengan C
5. Kondisi True maka bandingkan nilai variable C dengan D
6. Kondisi False maka bandingkan nilai variable B dengan C

**flowchart program** 
![flowchart](https://raw.githubusercontent.com/alivia1919/praktikum2/master/latihan2/flowchart.png)

**code lengkapnya :**
```c++
#include<iostream>
using namespace std;

int main(){

    int a,b,c,d;

    cout << "Masukan bilangan 1: ";
    cin >> a;
    cout << "Masukan bilangan 2: ";
    cin >> b;
    cout << "Masukan bilangan 3: ";
    cin >> c;
    cout << "Masukan bilangan 4: ";
    cin >> d;

    if (a>b && a>c && a>d)
        cout << "Bilangan terbesar adalah: " << a << endl;
    else if (b>a && b>c && b>d)
        cout << "Bilangan terbesar adalah: " << b << endl;
    else if (c>a && c>b && c>d)
        cout << "Bilangan terbesar adalah: " << c << endl;
    else
        cout << "Bilangan terbesar adalah: " << d << endl;
}
```

**hasilnya :**

![hasilnya](https://raw.githubusercontent.com/alivia1919/praktikum2/master/latihan2/hasilnya.png)


**SEMOGA BERMANFAAT**

# praktikum2
