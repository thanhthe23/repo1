#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    struct
    {
        char ht[25];
        float t, l, h, td;
    } ts[50], tg;
    int n, i, j;

    cout << " So thi sinh: ";
    cin >> n;
    for (i = 1; i <= n; ++i)
    {
        cout << "\n Thi sinh " << i;
        cout << "\n Ho ten: ";
        cin.ignore(1);
        cin.get(ts[i].ht, 25);
        cout << "Cac diem toan, ly, hoa: ";
        cin >> ts[i].t >> ts[i].l >> ts[i].h;
        ts[i].td = ts[i].t + ts[i].l + ts[i].h;
    }
    for (i = 1; i <= n - 1; ++i)
        for (j = i + 1; j <= n; ++j)
            if (ts[i].td < ts[j].td)
            {
                tg = ts[i];
                ts[i] = ts[j];
                ts[j] = tg;
            }
    cout << "\nDanh sach thi sinh sau khi sap xep ";
    for (i = 1; i <= n; ++i)
    {
        cout << "\n Ho ten: " << ts[i].ht;
        cout << " Tong diem: " << ts[i].td;
    }
    getch();
    return 0;
}