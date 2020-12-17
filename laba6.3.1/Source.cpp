// Lab_06_3_1.cpp
// < ������� �������� >
// ����������� ������ �6.2.2
// ����������� ����������� ������ �� ��������� ��������� ������� �� �������
// ������ 24

#include <iostream>
#include <iomanip>
#include <time.h>
using namespace std;
void create(int* a, const int size, const int Low, const int High)
{
    for (int i = 0; i < size; i++)
        a[i] = Low + rand() % (High - Low + 1);
}

void Print(int* a, const int size)
{
    cout << "a[n=" << size << "] = {";
    for (int i = 0; i < size; i++)
        cout << (i > 0 ? ", " : "") << a[i];
    cout << "}" << endl;
    cout << endl;
}

template <typename T> // ������ �������
T PrintTValue(T* a, const T size)
{
    cout << "Print values in template function" << endl;
    for (int i = 0; i < size; i++)
        cout << "a[" << setw(2) << i << " ] = " << setw(4) << a[i] << endl;
    cout << endl;

    return 0;
}

int main()
{
    srand((unsigned)time(NULL)); // ����������� ���������� ���������� �����

    const int n = 7;
    int a[n];
    int Low = -27;
    int High = 19;

    create(a, n, Low, High);

    Print(a, n);

    PrintTValue(a, n);

    return 0;
}
