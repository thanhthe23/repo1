#include <iostream>
#include <iomanip>
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

void nhapmt(float a[20][20], int m, int n)
{
    for (int i = 1; i <= m; ++i)
        for (int j = 1; j <= n; ++j)
        {
            cout << "\na[" << i << "," << j << "]= ";
            cin >> a[i][j];
        }
}
void inmt(float a[20][20], int m, int n)
{
    cout << setiosflags(ios::showpoint) << setprecision(1);
    for (int i = 1; i <= m; ++i)
        for (int j = 1; j <= n; ++j)
        {
            if (j == 1)
                cout << "\n";
            cout << setw(6) << a[i][j];
        }
}
void maxminds(float *x, int n, int &vtmax, int &vtmin)
{
    vtmax = vtmin = 1;
    for (int i = 2; i <= n; ++i)
    {
        if (x[i] > x[vtmax])
            vtmax = i;
        if (x[i] < x[vtmin])
            vtmin = i;
    }
}
int main()
{
    float a[20][20];
    int m, n;
    cout << "\nSo hang va so cot ma tran: ";
    cin >> m >> n;
    nhapmt(a, m, n);

    system("cls");
    inmt(a, m, n);
    float *p = (float *)a;
    int vtmax, vtmin;
    for (int i = 1; i <= m; ++i)
    {
        p = ((float *)a) + i * 20;
        maxminds(p, n, vtmax, vtmin);
        printf("\nHang %d Phan tu max= %6.1f tai cot %d", i, p[vtmax], vtmax);
        printf("\nPhan tu min= %6.1f tai cot %d", p[vtmin], vtmin);
    }
    getch();
    return 0;
}