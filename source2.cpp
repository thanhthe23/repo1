#include <iostream>
#include <iomanip>
#include <stdio.h>

using namespace std;

void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

int main()
{
    int c, d;
    cout << "Nhap gia tri c,d: "
         << "\n";
    cin >> c >> d;
    if (c > d)
        swap(c, d);
    cout << c;
    return 0;
}