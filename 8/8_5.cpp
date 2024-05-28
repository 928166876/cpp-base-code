#include<iostream>

using namespace std;
double cube(double a);
double reference(double &b);

int main(void)
{
    double x = 3.0;

    cout << cube(x);
    cout << " = cube of " << x << endl;
    cout << reference(x);
    cout << " = cube of " << x << endl;
    return 0;
}

double cube(double a)
{
    a *= a * a;
    return a;
}

double reference(double &b)
{
    b *= b * b;
    return b;
}