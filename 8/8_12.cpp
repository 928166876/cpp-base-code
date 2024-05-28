#include<iostream>

using namespace std;

const int LIM = 8;
template <typename T>
void Swap(T &a, T &b);

template <typename T>
void Swap(T a[], T b[], int n);

void Show(int *a);

int main(void)
{
    int i = 10;
    int j = 20;
    cout << "i, j = " << i << ", " << j << ".\n";
    Swap(i, j);
    cout << "Now i, j = " << i << ", " << j << ".\n";

    int d1[LIM] = {0, 7, 0, 4, 1, 7, 7, 6};
    int d2[LIM] = {0, 7, 2, 0, 1, 9, 6, 9};
    cout << "Original arrays:" <<endl;
    Show(d1);
    Show(d2);
    Swap(d1, d2, LIM);
    cout << "Swaped arrays:" <<endl;
    Show(d1);
    Show(d2);
    return 0;
}

template <typename T>
void Swap(T &a, T &b)
{
    T temp;
    temp = a;
    a = b;
    b = temp;
}

template <typename T>
void Swap(T a[], T b[], int n)
{
    T temp;
    for (int i = 0; i < n; i++)
    {
        temp = a[i];
        a[i] = b[i];
        b[i] = temp;
    }
}

void Show(int *a)
{
    for (int i = 0; i < LIM; i++)
    {
        cout << a[i] << "\t";
    }
    cout << endl;
    
}