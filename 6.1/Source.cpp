#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <ctime>
using namespace std;


void Random(int* r, int n, int A, int B)
{
    for (int i = 0; i < n; i++)
        r[i] = rand() % (B - A + 1) + A;
}

int Count(int* r, int n)
{
    int count = 0;
    for (int i = 0; i < n; i++)
        if (r[i] % 2 == 0 || r[i] % 13 == 0) count++;
    return count;
}

int Sum(int* r, int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
        if (r[i] % 2 == 0 || r[i] % 13 == 0) sum += r[i];
    return sum;
}

void Replace(int* r, int n)
{
    for (int i = 0; i < n; i++)
        if (r[i] % 2 == 0 || r[i] % 13 == 0) r[i] = 0;
}

void Print(int* r, int n)
{
    for (int i = 0; i < n; i++)
        cout << setw(3) << r[i] << " ";
    cout << "\n";
}

int main()
{
    srand((unsigned)time(0));
    const int n = 23;
    int r[n];
    int A = 4, B = 68;

    Random(r, n, A, B);
    Print(r, n);
    cout << "count=" << Count(r, n) << "\n";
    cout << "sum=" << Sum(r, n) << "\n";
    Replace(r, n);
    Print(r, n);

    system("pause");
    return 0;
}


